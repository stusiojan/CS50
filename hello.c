#include <stdio.h>
#include <cs50.h>
#include <ctype.h>

int main(void)
{
    string name = get_string("What is your name\n");
    tolower(name);
    printf("Hello, %s\n", name);

}