#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt user to enter height in domain <4;8>
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n > 8 || n < 1);

    for (int i = 0; i < n; i++)
    {
        for (int k= n - 1; k > i; k--)
        {
            printf(" ");
        }

        for (int j = -1; j < i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}