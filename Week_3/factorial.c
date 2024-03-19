#include <cs50.h>
#include <stdio.h>

int factorial(int number);
int main(void)
{
 int user_number = get_int("enter number: ");
 printf("%i\n", factorial(user_number));
}

int factorial(int number)
{
// implementing recursive function
    if (number ==1)
    {
        return 1;
    }

    return number * factorial(number -1);
}