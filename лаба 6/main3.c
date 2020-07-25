#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int c, wassp;

    wassp = 1;
    while ((c = getchar()) != EOF) {
        if (isspace(c))
            wassp = 1;
        else if (wassp) {
            wassp = 0;
            putchar(c);putchar('.');putchar(' ');
        }
    }
    putchar('\n');
    return 0;
}
