#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int change_owed;

    // Prompt the user for a non-negative integer
    do
    {
        change_owed = get_int("Change owed (in cents): ");
    } while (change_owed < 0);

    // Initialize coin count and denominations
    int coins = 0;
    int denominations[] = {25, 10, 5, 1}; // Arrays: Quarters, Dimes, Nickels, Pennies

    // Calculate the minimum number of coins
    for (int i = 0; i < 4; i++) // Iterate through the denominations
    {
        while (change_owed >= denominations[i])
        {
            change_owed -= denominations[i];
            coins++;
        }
    }

    // Print the total number of coins
    printf("%d\n", coins);
}