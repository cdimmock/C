// Libraries
#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    // Initialize variables
    float change;
    int counter = 0;
    
    // Say hello
    printf("How many coins should you use to make change for...\n");
    
    // Promt user for input
    do
    {
        change = get_float("Change owed: ");   
    }
    while (change < 0);
    
    
    // Round change
    change = round(change * 100);
    
    
    // Subtract from change
    
    // Quarters
    while (change >= 25)
    {
        counter++;
        change = change - 25;
    }
    // Dimes
    while (change >= 10)
    {
        counter++;
        change = change - 10;
    }
    // Nickels
    while (change >= 5)
    {
        counter++;
        change = change - 5;
    }
    // Pennies
    while (change >= 1)
    {
        counter++;
        change = change - 1;
    }
  
    printf("You should use %i coins\n", counter);
}