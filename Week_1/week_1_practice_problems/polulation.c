#include <cs50.h>
#include <stdio.h>


// population of 12 llamas
//each year 4 new llamas are born
// each year 3 llamas pass away
// how many years will it take to have a population of 13 llamas
int main(void)
{
    // prom the user for a starting number of lamas
    int initialPop;
  
    do 
    {
       initialPop = get_int("Start size: ");
    }
    while (initialPop < 9);
    // prompt user for goal number of lamas
      int end;
      do 
      {
        end = get_int("end size: ");
     
      }
      while (end < initialPop);

    // how many years will it take to get to the goal?
    int years = 0;
    while (initialPop < end)
    {
        initialPop += initialPop / 12;
        years++;
    }
  
    printf("Years: %i\n", years);
}


//cc polulation.c -lcs50 -lm -o polulation