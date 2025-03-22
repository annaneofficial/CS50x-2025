#include <stdio.h>

void meow(void);

int main(void)
{
    meow();
}

void meow(void)
{
    for (int i = 0 ; i < 3 ; i++)
    {
        printf("Meow\n");
    }
}