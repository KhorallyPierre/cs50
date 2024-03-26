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

    //  start with the last char and convert it into an integer value.
    // Then shorten the string, removing the last char,
    // and then recursively call convert using the shortened string as input,
    // where the next char will be processed.
    int input_length = strlen(input);
    char last_element = input[input_length - 1];
    printf("last element %c \n", last_element);
    input[input_length - 1] = '\0';
    // add null after next to last number in string

    if (input_length == 1)
    {
        return 0;
    }
    else
    {
        return convert(input);
    }
}