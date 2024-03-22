#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int convert(string input);

int main(void)
{
    string input = get_string("Enter a positive integer: ");

    for (int i = 0, n = strlen(input); i < n; i++)
    {
        if (!isdigit(input[i]))
        {
            printf("Invalid Input!\n");
            return 1;
        }
    }

    // Convert string to int
    printf("%i\n", convert(input));
}

int convert(string input)
{
    // TODO
    // use recursion to print out the given string as an integer
    // int num_input = atoi(input);
    // In the recursive version of convert, start with the last char and convert it into an integer value.
    char new_string[] = {};
    int length_of_string = strlen(input);

    if (length_of_string == 0)
    {
        char last_char = '\0';
    }
    else if (length_of_string > 0)
    {
        int n = 1;
        char last_char = input[length_of_string - n];
        n++;
        new_string[length_of_string];

        // remove last character from string
        //  pass new string into convert

        convert(new_string);
    }

    return 1;
}