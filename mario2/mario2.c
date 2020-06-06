//Libraries
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //initialize variables
    int marioBricks, i, j, k, m, n;
    
    //Prompt user for input
    do
    {
        marioBricks = get_int("How high should the pyramids be?: ");
    }
    while (marioBricks < 1 || marioBricks > 8);
    
// Pyramid 0
    // Iterate
    for (i = 0; i < marioBricks; i++)
    {
        // Left Space
        for (k = 0; k < marioBricks - i - 1; k++)
        {
            printf(" ");
        }
        // Left Pyramid
        for (j = 0; j < i + 1; j++)
        {
            printf("#");
        }
        
//  Space Between Pyramids
            printf("..");
            
// Pyramid 1
        for (n = 0; n < i + 1; n++)
        {
            printf("#");
        }
        printf("\n");
    }
}