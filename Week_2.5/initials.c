#include <cs50.h>
#include <stdio.h>

//given a name as a set of command-line arguments
// print the initlas of that name to the terminal
int main(int argc, string argv[])
{
 if (argc < 3){
    printf("include your first and last name! \n");
 }

 string first_name = argv[1];
 string last_name = argv[2];

 printf("initials are: %c and %c", argv[1][0], argv[2][0]);
}