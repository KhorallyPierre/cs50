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

    int input_length = strlen(input);
    char last_element = input[input_length - 1];
    // printf("last element char %c \n", last_element);
    // to convert a character number to a int number, 
    //subtract ASCII value from '0'. Same as using atoi. 
    int last_number = last_element - '0';
    printf("string %s\n", input);
    if (input[0] == '\n')
    {
        memmove(input, input+1, strlen(input));
        
    }
    int values = atoi(input);
    printf ("values %i \n", values);
    
    // printf("to be removed %c\n", first_number_removal);

   
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