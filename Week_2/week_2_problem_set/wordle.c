#include <cs50.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

// each of our text files contains 1000 words
#define LISTSIZE 1000

// values for colors and score (EXACT == right letter, right place; CLOSE == right letter, wrong place; WRONG == wrong letter)
#define EXACT 2
#define CLOSE 1
#define WRONG 0

// ANSI color codes for boxed in letters
#define GREEN "\e[38;2;255;255;255;1m\e[48;2;106;170;100;1m"
#define YELLOW "\e[38;2;255;255;255;1m\e[48;2;201;180;88;1m"
#define RED "\e[38;2;255;255;255;1m\e[48;2;220;20;60;1m"
#define RESET "\e[0;39m"

// user-defined function prototypes
string get_guess(int wordsize);
int check_word(string guess, int wordsize, int status[], string choice);
void print_word(string guess, int wordsize, int status[]);

int main(int argc, string argv[])
{
    // ensure proper usage
    // TODO #1
    if (argc < 2)
    {
        printf("you need a command line argument \n");
        return 1;
    }
    string k_string = argv[1];
    int k = atoi(k_string);
    int wordsize = 0;

    // ensure argv[1] is either 5, 6, 7, or 8 and store that value in wordsize instead
    // TODO #2
    if (k < 5 || k > 8)
    {
        printf("acceptable values are 5, 6, 7, or 8");
        printf("number inserted %i \n", k);
        return 0;
    }
    else
    {
        wordsize = k;
        printf("lenght of argument %i \n", k);
    }
    // open correct file, each file has exactly LISTSIZE words
    char wl_filename[6];
    sprintf(wl_filename, "%i.txt", wordsize);
    FILE *wordlist = fopen(wl_filename, "r");
    if (wordlist == NULL)
    {
        printf("Error opening file %s.\n", wl_filename);
        return 1;
    }

    // load word file into an array of size LISTSIZE
    char options[LISTSIZE][wordsize + 1];

    for (int i = 0; i < LISTSIZE; i++)
    {
        fscanf(wordlist, "%s", options[i]);
    }

    // pseudorandomly select a word for this game
    srand(time(NULL));
    string choice = options[rand() % LISTSIZE];

    // allow one more guess than the length of the word
    int guesses = wordsize + 1;
    bool won = false;

    // print greeting, using ANSI color codes to demonstrate
    printf(GREEN "This is WORDLE50" RESET "\n");
    printf("You have %i tries to guess the %i-letter word I'm thinking of\n", guesses, wordsize);

    // main game loop, one iteration for each guess
    for (int i = 0; i < guesses; i++)
    {
        // guesses is the numnber of times the user gets to guess a word
        // obtain user's guess
        string guess = get_guess(wordsize);
        printf("guess value %s \n", guess);
        // array to hold guess status, initially set to zero

        int status[wordsize];
        for (int a = 0; a < wordsize; a++)
        {
            int each_element_of_status = status[a];

            status[a] = 0;
            printf("each element in state %i \n", status[a]);
        }
        // set all elements of status array initially to 0, aka WRONG
        // TODO #4

        // keep track of user's score on a per letter basis and a per word basis.
        for (int j = 0; j < wordsize; j++)
        {
            char each_chosen_letter = choice[j];
            printf("each chosen letter %c \n", each_chosen_letter);
            for (int k = 0; k < wordsize; k++)
            {
                char each_letter = guess[k];
                printf("each letter %c \n", each_letter);

                // if letters match
                if (each_letter == each_chosen_letter)
                {
                    status[i] = status[i] + 1;
                    printf("new status after condition %i \n", status[i]);
                }
                // if letters and indices match

                else if (each_letter == each_chosen_letter && k == j)
                {
                    printf("i value when 2 should be added %i \n", k);
                    printf("j value when 2 should be added %i \n", j);
                    status[i] = status[i] + 2;
                }
            }
        }

        // printf("each letter %c \n", each_letter);
        // printf("choice value %c \n", each_chosen_letter);

        // Score of 2 for letters in the correct place (defined as EXACT)
        // score of 1 for letters in the word but in the wrong place (defined as CLOSE)
        // score of 0 (defined as WRONG)

        // Calculate score for the guess
        int score = check_word(guess, wordsize, status, choice);

        printf("Guess %i: ", i + 1);

        // Print the guess
        print_word(guess, wordsize, status);

        // if they guessed it exactly right, set terminate loop
        if (score == EXACT * wordsize)
        {
            won = true;
            break;
        }
    }

    // Print the game's result
    // TODO #7

    // that's all folks!
    return 0;
}

string get_guess(int wordsize)
{
    string guess = "";
    int length_of_guess = 0;

    // ensure users actually provide a guess that is the correct length
    // TODO #3

    do
    {
        guess = get_string("word: ");
        length_of_guess = strlen(guess);
        printf("guess size %i \n", length_of_guess);
        printf("word size %i \n", wordsize);
    } while (wordsize != length_of_guess);

    return guess;
}

int check_word(string guess, int wordsize, int status[], string choice)
{
    int score = 0;

    // compare guess to choice and score points as appropriate, storing points in status
    // TODO #5

    // HINTS
    // iterate over each letter of the guess
    // iterate over each letter of the choice
    // compare the current guess letter to the current choice letter
    // if they're the same position in the word, score EXACT points (green) and break so you don't compare that letter further
    // if it's in the word, but not the right spot, score CLOSE point (yellow)
    // keep track of the total score by adding each individual letter's score from above

    return score;
}

void print_word(string guess, int wordsize, int status[])
{
    // print word character-for-character with correct color coding, then reset terminal font to normal
    // TODO #6

    printf("\n");
    return;
}
