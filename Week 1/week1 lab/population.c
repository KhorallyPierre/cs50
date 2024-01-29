#include <cs50.h>
#include <stdio.h>


    //Say we have a population of n llamas.
    // Each year, n / 3 new llamas are born, and n / 4 llamas pass away.
    // if we were to start with n = 1200 llamas, then in the first year,
    // 1200 / 3 = 400 new llamas would be born and 1200 / 4 = 300 llamas would pass away.
    // At the end of that year, we would have 1200 + 400 - 300 = 1300 llamas.
int main(void)
{
    // TODO: Prompt for start size of n
    int startSize;
    do
    {
        startSize = get_int("start size: ");
    }
    while (startSize < 100);
    // TODO: Prompt for end size
    int endSize;
    do
    {
        endSize = get_int("end size: ");
    }
    while(endSize < startSize);
    // TODO: Calculate number of years until we reach threshold
     // each year we n/3 are born
    // each year n/4 die
    int population = startSize + (startSize/3) - (startSize/4);
    printf("population is now %i \n", population);
    // TODO: Print number of years

    int years = 0;

    //printf("populationExceedsEndSize %i \n", populationExceedsEndSize);
    while (population < endSize) {
           years ++;
           population = population + (population/3) - (population/4);
           printf("years %i \n", years);
           printf("population %i \n", population);
    }
}
