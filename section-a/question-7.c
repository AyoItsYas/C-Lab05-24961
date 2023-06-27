#include <stdio.h>

int main(void)
{
    int a = 0;
    int b = 1;
    int c = 0;

    printf(" 1 -> %d\n", a);
    printf(" 2 -> %d\n", b);

    int i = 0;
    for (i = 0; i < 8; i++)
    {
        c = a + b;
        printf("%2d -> %d\n", i + 3, c);
        a = b;
        b = c;
    }

    return 0;
}