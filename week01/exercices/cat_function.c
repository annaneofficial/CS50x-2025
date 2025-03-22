#include <stdio.h>
#include <cs50.h>

// Function prototypes
int get_positive_int(void);
void say_meow(int n);

int main(void)
{
    // Get a positive integer from the user
    int times = get_positive_int();

    // Print "meow!" the given number of times
    say_meow(times);

    return 0;
}

// Function to get a positive integer from the user
int get_positive_int(void) 
{
    int n;
    do
    {
        n = get_int("Number: ");
    } while (n < 1); // Repeat until the user inputs a positive integer

    return n;
}

// Function to print "meow!" n times
void say_meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("meow!\n");
    }
}
