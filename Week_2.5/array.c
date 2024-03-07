#include <cs50.h>
#include <stdio.h>

// create a program that prompts the user for a size, n. DONE
// Dynamically create an array of that size, where each
//  element is 2 times the previous one
// start the array at 1/
//  print the array, integer by integer

int main(void)
{

    int n;
    do
    {
        n = get_int("size: ");
    } while (n < 1);

    int array[n];
    int each_element;
    for (int i = 1; i <= n; i++)
    {
        // as i goes up,  gets multiplied by two
        each_element = i * 2;
        printf("array, integer by integer %i \n", each_element);
    }
}
