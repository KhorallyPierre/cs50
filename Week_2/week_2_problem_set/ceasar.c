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
    only_digits(string_key);

    int length = strlen(string_key);
    if (length > 1)
    {
        printf("your key is too long\n");
        return 1;
    }

    // convert string to a number
    int number_key = 0;
    for (int i = 0; string_key[i] != '\0'; i++)
    {
        number_key = number_key * 10 + (string_key[i] - 48);
    }

    printf("ciphertect: "); ciphertext(plain_text);
    for (int i = 0; i < length; i++)
    {
        if (isdigit(string_key[i]))
        {
            printf("success \n");
            string plain_text = get_string("plaintext: ");
        }
    }
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

// ciphertext function takes in number key, applies it to plaintext, and returns cyphertext

// For each character in the plaintext:
// move the letters according to the key

// cc ceasar.c -lcs50 -lm -o ceasar