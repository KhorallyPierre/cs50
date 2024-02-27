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
        else if (isdigit(key[i]))
        {
            printf("numbers are not allowed \n");
            return 1;
        }

        int counter = 0;
        int current_key = key[i];
        int arr_of_chars_for_key[] = {key[0], key[1], key[2], key[3], key[4], key[5], key[6], key[7], key[8], key[9], key[10], key[11], key[12], key[13], key[14], key[15], key[16], key[17], key[18], key[19], key[20], key[21], key[22], key[23], key[24], key[25]};

        for (int i = 0; i < 26; i++)
        {
            int each_character = arr_of_chars_for_key[i];
            if (current_key == each_character)
            {
                counter++;
                if (counter > 1)
                {
                    printf("no repeats allowed \n");
                    return 1;
                }
            }
        }

        char banned_characters[] = {'!', '@', '#', '$', '%', '^', '~', '`', '&', '*', '(', ')'};
        for (int i = 0; i < 12; i++)
        {
            char a_banned_character = banned_characters[i];
            if (current_key == a_banned_character)
            {
                printf("banned charactr %c", a_banned_character);
                printf("symbols are not allowed \n");
                return 1;
            };
        }
    }
}

// cc substitution.c -lcs50 -lm -o substitution
