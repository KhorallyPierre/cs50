#include <cs50.h>
#include <stdio.h>
#include <string.h>

// \0 is a null character. It marks the end of a string

int main(int argc, string argv[])
{
   if (argc < 2){
    printf("you need more command line arguments!");
   }
    
    string word = argv[1];
    printf("word %s \n", word);
    int length = strlen(word);
    for (int i=0; i < length; i++){
        printf("each letter %c \n", word[i]);
    }

    for (int j =0; j < argc; j++){
        printf("at argv[%i], the word is '%s' \n", j, argv[j]);
    }
}