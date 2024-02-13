#include <cs50.h>
#include <stdio.h>

// create a program that prompts user for:
// A name
// an age
// a phone number

int main(void)
{
    string name = get_string("what is your name? ");
    int age = get_int("what is your age? ");
    string number = get_string("What is your number? ");

    printf("Age is %i. Name is %s. Phone is %s.", age, name, number ); 
}

//cc phonebook.c -lcs50 -lm -o phonebook