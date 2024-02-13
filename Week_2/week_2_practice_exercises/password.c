// Check that a password has at least one lowercase letter, uppercase letter, number and symbol
// Practice iterating through a string
// Practice using the ctype library

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

bool valid(string password);

int main(void)
{
    string password = get_string("Enter your password: ");
    if (valid(password))
    {
        printf("Your password is valid!\n");
    }
    else
    {
        printf("Your password needs at least one uppercase letter, lowercase letter, number and symbol\n");
    }
}
bool issymbol(char character)
{
   
    char symbols[] = {'!', '@', '#', '$', '%', '"', '(', ')', '*', '+', ',', '-', '_', '/', ';', ':', '<', '>', '=', '>', '?'};
    int size_of_array = sizeof(symbols);

    for (int j = 0; j < size_of_array; j++)
    {
        if (symbols[j] == character)
        {
           return true;
        }
    
    }
    return false;
}
// TODO: Complete the Boolean function below
// Your function will iterate through the password that’s supplied to it as an argument.
// Since you have to find at least one lower case letter, one upper case letter, one number and one symbol,
//  you may want to create a boolean variable for each and set each to false before you iterate through the string.
//  If you then find a number, for instance you can set that boolean to true.
//  If all booleans are true at the end of the function, it means all criteria are met, and you would return true.

bool valid(string password)
{

    // variables for each condition before loop runs to check for conditions
    bool word_has_uppercase = false;
    bool word_has_lowercase = false;
    bool word_has_digit = false;
    bool word_has_symbol = false;

    int length_of_password = strlen(password);

    for (int i = 0; i < length_of_password; i++)
    {

        char character = password[i];

        bool uppercase = isupper(character);
        bool lowercase = islower(character);
        bool digit = isdigit(character);
        bool symbol = issymbol(character);

        if (uppercase)
        {
            word_has_uppercase = true;
        }
        else if (lowercase)
        {
            word_has_lowercase = true;
        }
        else if (digit)
        {
            word_has_digit = true;
        }
        else if (symbol)
        {
            word_has_symbol = true;
        }
    }

    if (!word_has_digit || !word_has_lowercase || !word_has_symbol || !word_has_uppercase)
    {
        return false;
    }
    else
    {
        return true;
    }
}
