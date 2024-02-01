#include <stdio.h>
#include <cs50.h>

// create a program that prompts a user for:
// a name
// an age
//a phone number
// print the values back to the user as confirmation


int main(void)
{
    string name = get_string("what's your name?: ");
    int age = get_int("how old are you?: ");
    string number = get_string("what's your number?: ");
    printf("name is %s\n age is %i\nphone number is %li\n", name, age, number);
}
