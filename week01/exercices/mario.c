#include <stdio.h>

#define HEIGHT 3
#define WIDTH  3

// Function prototypes
void print_row(void);
void print_pyramid(void);

int main(void)
{
    print_pyramid();
    return 0;
}

// Function to print a single row of hashes
void print_row(void)
{
    for (int i = 0; i < WIDTH; i++)
    {
        printf("#");
    }
    printf("\n");
}

// Function to print the entire pyramid
void print_pyramid(void)
{
    for (int i = 0; i < HEIGHT; i++)
    {
        print_row();
    }
}
