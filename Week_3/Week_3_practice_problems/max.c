// Practice writing a function to find a max value
//The main function initializes the array, asks the user to enter values,
//and then passes the array and the number of items to the max function. 
//Complete the max function by iterating through every element in the array, and return the maximum value.


#include <cs50.h>
#include <stdio.h>

int max(int array[], int n);

int main(void)
{
    int n;
    do
    {
        n = get_int("Number of elements: ");
    } 
    while (n < 1);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = get_int("Element %i: ", i);
    }

    printf("The max value is %i.\n", max(arr, n));
}

// TODO: return the max value
int max(int array[], int n)
{
    return 0;
}
