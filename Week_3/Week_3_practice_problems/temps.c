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
int smallest_number(void);
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
       if (current_temp ){

       }
        //  swap original number's position with smallest number position in array
        //  loop through array again excluding sorted smallest number and do the same thing
        //  current temp swaps spots with smallest temp

        current_temp = temps[i].temp;
        // temps[i] = temps[index];
    }
   
}  
int smallest_number(void)
{
    // create a loop that doesnt include current temp
     // find smallest number as we loop through
     int num_length = sizeof(NUM_CITIES)/ sizeof( temps[0].temp);
     int min = temps[0].temp;
    for (int i = 0; i < num_length;  i++){
        if (temps[i].temp < min){
            min = temps[i].temp;
            printf("min %i \n", min);
        }
        
    }
    return min;
}