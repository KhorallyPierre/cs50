#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc < 2)
    {
        printf("please provide a key \n");
    }
    else if (argc > 2)
    {
        printf("your key is too long \n");
    }
    string key = argv[1];
    int key_length = strlen(key);

    for (int i = 0; i < key_length; i++)
    {
        // key_length has to be 26
        if (key_length < 26)
        {
            printf("your key is too short \n");
            return 1;
        }
        // cant contain non alphanumeric characters
        else if (isdigit(key[i])){
            printf("numbers are not allowed \n");
            return 1; 
        }
        // has to contain each letter only once
        // for (int j = 0; j < key_length; j++){
        //     if (key[j] == key[i]){
        //         printf("you can't have repeats %c", key[j]);
               
                
        //     }
        // }
    }
}

// cc substitution.c -lcs50 -lm -o substitution
