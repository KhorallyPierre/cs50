#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

// user’s key is going to be a number; though you may assume that, if it is a number,
//  it will be a positive integer.
// neither the comma nor the space were “shifted” by the cipher. Only rotate alphabetical characters!
//  Lowercase letters remain lowercase, and uppercase letters remain uppercase.
//  if no key is provided,keep promtping the user for it, if the key isn't a number, promt the usr for it again
//  if more than one key is given, promp;t the user tp enter key aain/
char rotate(char character_from_plain_text, int string_key);
bool only_digits(string string_key);
int main(int argc, string argv[])
{
    if (argc == 1)
    {
        printf("you must provide a key \n");
        return 1;
    }

    string string_key = argv[1];
    // calling digits function when key is inserted
    int digit_key = only_digits(string_key);

    int length = strlen(string_key);

    for (int i = 0; i < length; i++)
    {
        if (length > 1 && isdigit(string_key[i]))
        {
            printf("your key is too long\n");
            return 1;
        }
    }
    char current_character;
    printf("success \n");
    string plain_text = get_string("plaintext: ");
    char length_of_plain_text = strlen(plain_text);
    for (int j = 0; j < length_of_plain_text; j++)
    {
        current_character = plain_text[j];
    }
    // printf("current character %c \n", current_character);
    rotate(current_character, digit_key);
    printf("current character %c \n", current_character);
    
}

bool only_digits(string string_key)
{
    int length = strlen(string_key);
    for (int i = 0; i < length; i++)
    {

        if (!isdigit(string_key[i]))
        {
            printf(" please provide a number between 10 and -1 \n");
            return false;
        }
    }
    return true;
}

char rotate(char character_from_plain_text, int digit_key)
{
    char alphabet_lower[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 's', 't', 'u', 'v', 'x', 'y', 'z'};
    // printf("characer from plain text %c", character_from_plain_text);
    for (int i = 0; i < 27; i++)

    {
        char cipher_character;
        char lowercase_character = alphabet_lower[i];
        char uppercase_character = toupper(alphabet_lower[i]);
        printf("alphabet lower %c \n", lowercase_character);
        printf("alphabet upper %c \n", uppercase_character);
        if (character_from_plain_text == alphabet_lower[i])
        {
            cipher_character = alphabet_lower[i + digit_key];
            return cipher_character;
        }
        else if (character_from_plain_text == uppercase_character)
        {
            cipher_character = uppercase_character + digit_key;
        }
        else if (character_from_plain_text != lowercase_character || character_from_plain_text != uppercase_character)
        {
            cipher_character = character_from_plain_text;
        }
    }
    return true;
}
// Then, implement a function called, e.g., rotate, that takes a char as input and also an int,
// and rotates that char by that many positions if it’s a letter (i.e., alphabetical), wrapping around from Z to A (and from z to a) as needed.
// If the char is not a letter, the function should instead return the same char unchanged.

// ciphertext function takes in number key, applies it to plaintext, and returns cyphertext

// For each character in the plaintext:
// move the letters according to the key

// cc ceasar.c -lcs50 -lm -o ceasar