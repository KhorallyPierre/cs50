// Write a function to replace vowels with numbers
// Get practice with strings
// Get practice with command line
// Get practice with switch

#include <cs50.h>
#include <stdio.h>
#include <string.h>

string replace(string original_word);

// argc represents the number of stuff in argv[]
// command-line agruments mean the argument is given at the very beginning of the program (user does not get prompted).
int main(int argc, string argv[])
{
    if (argc > 2){
        printf("invalid \n");
        return 1;
    }
    for (int i = 0; i < argc; i++){
        printf("string %s \n", argv[i]);

    }
    string command_line_word = argv[1];
    printf(" %s \n",  replace(command_line_word));
}

string replace(string original_word){
    int number_of_characters = strlen(original_word);
    // looping through each character
    for (int j = 0; j < number_of_characters; j++){
        char character = original_word[j];
        if (character == 'a'){
            original_word[j] = '6';

        } else if (character == 'e'){
            original_word[j] = '3';
        } else if (character == 'i'){
            original_word[j] = '1';
        } else if (character  == 'o'){
          original_word[j]= '0';
        }
    }
    // convert list of characters into a string, retunr that string
    return original_word;
}
