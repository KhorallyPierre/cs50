#include <cs50.h>
#include <stdio.h>


// population of 12 llamas
//each year 4 new llamas are born
// each year 3 llamas pass away
// how many years will it take to have a population of 13 llamas
int main(void)
{
    // prom the user for a starting number of lamas
    int initialLlamas = 12;
  
    for (int i = 0; i < 13; i++ )
    {
      int born = initialLlamas + 4;
      int dead = born - 3;
      int finalLlamas = born + dead;
      initialLlamas++;
    }
    
}


//cc population1.c -lcs50 -lm -o population1