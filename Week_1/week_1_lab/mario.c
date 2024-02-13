#include <cs50.h>
#include <stdio.h>
//Let’s recreate that pyramid in C, albeit in text,
//using hashes (#) for bricks, a la the below.
// Each hash is a bit taller than it is wide,
//so the pyramid itself will also be taller than it is wide.
//The program we’ll write will be called mario.
//And let’s allow the user to decide just how tall the pyramid should be
// by first prompting them for a positive integer between, say, 1 and 8, inclusive.
void print_hash(int numberOfHashes);
void print_dot(int numberOfDots);

int main(void)
{
    int height;
    do
    {
    height = get_int("how high is Mario climbing?: ");
    }
    while (height > 8 || height < 1 );

    for (int i = 1; i <= height; i++) {
        int dotsOnEachLine = height - i;
        // print_hash(i);
        print_dot(dotsOnEachLine);
        print_hash(i);
        printf("  ");
        print_hash(i);
        printf("\n");

    }


}

void print_hash(int numberOfHashes)
{
    //each value height is, print that number of hashes
    // make a new line after that line prints
    // height needs to start at 1
    // height has to be less than or equal to the number of hashes
       for (int height = 1; height <= numberOfHashes; height++){

            printf("#");


        }
}

void print_dot(int numberOfDots)
{

    //avoid the first line of hashes
    // after that add one dot, then another then another untill top is reached
    for (int row = 1 ; row <= numberOfDots; row++){
        printf(" ");
    }

}

