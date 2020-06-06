//Libraries
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //Prompt user input
    string name = get_string("What is your name?\n");
    //Print response
    printf("Hello, %s!\n", name);
}