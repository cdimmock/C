//Libraries
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //initialize variables
    int marioBricks, i, j, k;
    
    //Prompt user for input
    do
    {
        marioBricks = get_int("How high should the pyramid be?: ");
    }
    while (marioBricks < 1 || marioBricks > 8);
    
    // Iterate
    for (i = 0; i < marioBricks; i++)
    {
        for (k = 0; k < marioBricks - i - 1; k++)
        {
            printf(" ");
        }
        for (j = 0; j < i + 1; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}