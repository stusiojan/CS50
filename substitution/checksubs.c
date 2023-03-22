#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{
    //Get key as a string from the argv array
    string key = argv[1];

    //Validate key - Check for non-alphabetic characters
    for(int i = 0 ; i < strlen(key) ; i++)
    {
        if(!isalpha(key[i]))
        {
            printf("Usage: ./substitution key\n");
            return 1;
        }
    }

}