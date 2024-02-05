#include <cs50.h>
#include <ctype.h>
#include <stdio.h>

// The main function prompts the user for the number of weeks a user has been taking CS50,
//  then creates an array with as many elements. Notice that, after retrieving some data,
//  the program prompts the user to type in either “T” or “A”—”T” should (but doesn’t yet!)
//  print the total number of hours the user entered, while “A” should (but doesn’t yet!)
//  print the average hours the user entered. Notice that the do while loop uses toupper
//  to capitalize the letter that’s input before it is saved in the variable output.
//   Then, the printf function calls calc_hours. Note the syntax involved when passing an array to a function.



float calc_hours(int hours[], int weeks, char output);

int main(void)
{
    int weeks = get_int("Number of weeks taking CS50: ");
    int hours[weeks];

    for (int i = 0; i < weeks; i++)
    {
        hours[i] = get_int("Week %i HW Hours: ", i);
    }

    char output;
    do
    {
        //toupper capitalizes letter of characters entered.
        output = toupper(get_char("Enter T for total hours, A for average hours per week: "));
    }
    while (output != 'T' && output != 'A');

      printf("%.1f hours\n", calc_hours(hours, weeks, output));

}

// TODO: complete the calc_hours function
float calc_hours(int hours[], int weeks, char output)
{
    // To complete calc_hours, first total up the hours saved in the array into a new variable.
    int total_hours = 0;
    int number_of_weeks = sizeof(hours[weeks])/sizeof(hours[0]);
    for (int j = 0; j <= number_of_weeks; j++){
         total_hours = total_hours + hours[j];
    }



    // Then, depending on the value of output, return either the sum, or the average number of hours.
    if (output == 'T'){
       return total_hours;
    }else if (output == 'A'){
        return total_hours/weeks;
    }
    return 0;
}
