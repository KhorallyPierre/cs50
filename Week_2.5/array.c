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
    array[0] = 1;
    printf("%i \n", array[0]); 
    for (int i = 1; i < n; i++)
    {
        // as i goes up,  gets multiplied by two
        array[i] = 2 * array[i -1];
        
        printf("array, integer by integer %i \n", array[i]);
    }
}
