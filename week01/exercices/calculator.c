#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int dollars = 1;

    while (true)
    {
        char c = get_char("Here is $%i. Double it and give it to the next person? (y/n): ", dollars);

        if (c == 'y' || c == 'Y')
        {
            dollars *= 2;
        }
        else
        {
            break;
        }
    }

    printf("Total dollars: $%i\n", dollars);
}
