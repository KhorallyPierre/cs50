#include <cs50.h>
#include <stdio.h>
//You are to complete the Boolean function, prime, which tests if a number is prime,
// and returns true if it is, and false if it is not.
// a prime number is a number whose only factors are 1 and itself
bool prime(int number);

int main(void)
{
    int min;
    do
    {
        min = get_int("Minimum: ");
    }
    while (min < 1);

    int max;
    do
    {
        max = get_int("Maximum: ");
    }
    while (min >= max);

    for (int i = min; i <= max; i++)
    {
        if (prime(i))
        {
            printf("%i\n", i);
        }
    }
}

bool prime(int number)
{

    for (int j = 2; j < number; j++ ){


         if (number % j == 0){
            return false;
            // break;

        }
    }
    return true;
}
