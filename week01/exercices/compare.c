#include <cs50.h>
#include <stdio.h>

int main(void) {
    
    int x = get_int("what is X: ");
    int y = get_int("what is Y: ");

    if (x < y) {

        printf("X less than Y\n");
    }
    else if (x > y) {
        
        printf("X Greater than Y\n");
    }
    else
        printf("X Equal to Y\n");
}
