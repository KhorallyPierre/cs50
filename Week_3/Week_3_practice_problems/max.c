// Practice writing a function to find a max value
#include <cs50.h>
#include <stdio.h>

int max(int array[], int n);

int main(void)
{
    // The main function initializes the array, asks the user to enter values,
    int n;
    do
    {
        n = get_int("Number of elements: ");
    } while (n < 1);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = get_int("Element %i: ", i);
    }
    // and then passes the array and the number of items to the max function.
    printf("The max value is %i.\n", max(arr, n));
}

// TODO: return the max value
int max(int array[], int n)
{
    // Complete the max function by iterating through every element in the array, and return the maximum value.
    // loop through array of elements in arr[n] (i <n)
  
    int current;
    for (int i = 0; i < n; i++)
    {
        current = array[i];
        int current_index = i;
        printf("current %i \n", current);
        int next = array[i + 1];
        int next_index = i+1;
        printf("next %i \n", next);

        if (array[i] > array[i + 1])
        {
            //current index becomes next index
            // left goes to right's index
            array[i +1] = current;
            // right goes to left's idnex
            array[i] = next;
            printf("current %i \n", current);

            // compare next index to the one after it 
            
        }
    }
   
    return current;
}
