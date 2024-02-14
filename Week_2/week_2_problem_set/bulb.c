#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);
// We’ll have to find a way to encode text as a sequence of binary numbers.
// write a program called bulbs that takes a message and converts it to a set of bulbs that we could show to an unsuspecting audience.
// The first step consists of turning the text into decimal numbers.
//  each letter is represented by a number from the ASCII chart
//  to find the binary number, divide the number by 2 until there's nothing left to divide. if there's no remainder, its a 0, it there is, add 1.
//  use modulo to determine if there are remainders.
int main(void)
{
    // TODO

    string given_message = get_string("your message: ");
    // loop through given message to turn them into elements?
    char length_of_message = strlen(given_message);
    for (int i = 0; i < length_of_message; i++)
    {
        int number_val = (int)given_message[i];
        printf("\n");
        int binary_value[8] = {};
        for (int j = 7; j > -1; j--)
        {
            if (number_val % 2 == 0)
            {
                binary_value[j] = 0;
                number_val /= 2;
            } else if (number_val %2 !=0){
                binary_value[j] = 1;
                number_val /=2;
            }
        print_bulb( binary_value[j]);
        }
        
         // for each letter, calculate numerical value
    }

}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}
