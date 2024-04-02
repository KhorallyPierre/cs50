// Practice working with structs
// Practice applying sorting algorithms

// going with selection sort
// bc it takes the least amount
// of steps compared to insertion sort (numbers being sorted move one at a time before reaching correct spot)
//  selection sort loops through array, finds what it's looking for, and immediately puts it where it's supposed to go.
//  loops through the remaining arrat as opposed to whole array, taking less time than insertion sort.
#include <cs50.h>
#include <stdio.h>

#define NUM_CITIES 10

typedef struct
{
    string city;
    int temp;
} avg_temp;

avg_temp temps[NUM_CITIES];
int smallest_number_index(int);
void sort_cities(void);

int main(void)
{
    temps[0].city = "Austin";
    temps[0].temp = 97;

    temps[1].city = "Boston";
    temps[1].temp = 82;

    temps[2].city = "Chicago";
    temps[2].temp = 85;

    temps[3].city = "Denver";
    temps[3].temp = 90;

    temps[4].city = "Las Vegas";
    temps[4].temp = 105;

    temps[5].city = "Los Angeles";
    temps[5].temp = 82;

    temps[6].city = "Miami";
    temps[6].temp = 97;

    temps[7].city = "New York";
    temps[7].temp = 85;

    temps[8].city = "Phoenix";
    temps[8].temp = 107;

    temps[9].city = "San Francisco";
    temps[9].temp = 66;

    sort_cities();

    printf("\nAverage July Temperatures by City\n\n");

    for (int i = 0; i < NUM_CITIES; i++)
    {
        printf("%s: %i\n", temps[i].city, temps[i].temp);
    }
}

// TODO: Sort cities by temperature in descending order
void sort_cities(void)
{
    // selection sort
    // loops through array
    for (int i = 0; i < NUM_CITIES; i++)
    {
        // loop through array and set current temp in variable
        int current_temp = temps[i].temp;
        printf("current temp %i \n", current_temp);
        // find smallest number as we loop through
        int min_index = smallest_number_index(i);
        printf("min index  sort cities function %i \n", min_index);
        int min_temp = temps[min_index].temp;
        //  swap original number's position with smallest number position in array
        if (min_temp < current_temp )
        {
            // find location of min number

            // swap them - i is the current temperatures location
            temps[i].temp = min_temp;
            temps[min_index].temp = current_temp;
            printf("min temp last condition %i at index %i\n", temps[i].temp, i);
            printf("current temp last condidtion %i at index %i\n", temps[min_index].temp, i);

            
            
        }

        //  loop through array again
        // excluding sorted smallest number
        // and do the same thing
        //  current temp swaps spots with smallest temp
    }
}
int smallest_number_index(int x)
{
    // create a loop that doesnt include current temp

    int min = temps[x].temp;
    int min_index = x;
    for (int i = x; i < NUM_CITIES; i++)
    {
        if (temps[i].temp < min)
        {
            min = temps[i].temp;
            min_index = i;
            printf("min index in last function %i \n", min_index);
            printf("min %i \n", min);
        } 
    }
    
    return min_index;
}