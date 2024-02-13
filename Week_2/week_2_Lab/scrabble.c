#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words (function is being called)
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // TODO: Print the winner
    if (score1 > score2)
    {
        printf("player 1 wins \n");
    }
    else if (score2 > score1)
    {
        printf("player 2 wins \n");
    }
    else if (score1 == score2)
    {
        printf("it's a tie! \n");
    }
}

int compute_score(string word)
{

    int total_score = 0;
    int length_of_word = strlen(word);
    char alphabet[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'x', 'y', 'z'};
    for (int i = 0; i < length_of_word; i++)
    {
        char uppercase_letter_from_word = toupper(word[i]);

        int size_of_alphabet = sizeof(alphabet);
        int value_of_letter = 0;
        for (int j = 0; j < size_of_alphabet; j++)
        {

            char uppercase_letter_from_alphabet = toupper(alphabet[j]);

            if (word[i] == alphabet[j] || uppercase_letter_from_alphabet == uppercase_letter_from_word)
            {
                // aplhabet[j] has the value of  d  and  point[j]  has the value of 2. we want to collect the value of each letter.
                value_of_letter = POINTS[j];
                total_score += value_of_letter;
                
            }
            else
            {
                total_score += 0;
            }
        }

        // TODO: Compute and return score for string
        
        printf("word %s, letter %c value of letter %i total score %i \n", word, word[i], value_of_letter, total_score);
    }
    return total_score;
}
