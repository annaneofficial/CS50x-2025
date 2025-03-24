#include <stdio.h>

void print_pyramid(int height);

int main()
{
    // height of the pyramid
    int height = 5;

    // print a pyramid of that height
    print_pyramid(height);

    return 0; // Explicitly return 0 to indicate successful execution
}

void print_pyramid(int height)
{
    for (int i = 0; i < height; i++) {
        // Print the correct number of '#' characters for the current row
        for (int j = 0; j <= i; j++) {
            printf("#");
        }
        // Move to the next line after printing a row
        printf("\n");
    }
}