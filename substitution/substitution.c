#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{
    //Get key as a string from the argv array
    string key = (argv[1]);

    //Validate key - Check if there is any key
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }

    //Validate key - Check key length
    if(strlen(key) != 26)
    {
        printf("Key must contain 26 characters\n");
        return 1;

    }

    //Validate key - Check for non-alphabetic characters
    for(int i = 0 ; i < strlen(key); i++)
    {
        if(!isalpha
        (key[i]))
        {
            printf("Usage: ./substitution key\n");
            return 1;
        }
    }

     //Validate key - Check for repeated characters (case-insensitive)
     for(int n = 0; n < strlen(key) ; n++)
     {
        for(int m = n + 1 ; m <= strlen(key) ; m++) //might be buggy at the end of a string
        {
            if(tolower(key[n]) == tolower(key[m]))
            {
                printf("Usage: ./substitution key\n");
                return 1;
            }
        }
     }

    //Prompt user imput
    string plaintext = get_string("plaintext: ");
    //print out ciphertext
    printf("ciphertext: ");

    //Encipher
    for(int a = 0 ; a < strlen(plaintext) ; a++) //Pick chars from plaintext one by one
    {
        int j = plaintext[a];
        //remap letters according to the key
        //if a plaintext letter is lowercase
        for(int x = 97 ; x < 123 ; x++)
        {
            if(x==j)
            {
                x=tolower(key[x-97]);
                j=x;
                printf("%c", j);
            }
        }
        //if a plaintext letter is uppercase
        for(int y = 65 ; y < 91 ; y++)
        {
            if(y==j)
            {
                y=toupper(key[y-65]);
                j=y;
                printf("%c", j);
            }
        }
        if((j >= 32 && j <= 64) || (j >= 91 && j <= 96) || (j >= 123 && j <= 126) )
        {
            printf("%c", j);
        }

    }

    //making space after ciphertext
    printf("\n");


}