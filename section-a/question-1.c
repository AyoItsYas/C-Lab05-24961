#include <stdio.h>

int main(void)
{
    int i = 0;

    while (i <= 100)
    {
        printf("%d\n", i);
        i++;
    }

    printf("\n");

    i = 0;
    for (i = 0; i <= 100; i++)
    {
        printf("%d\n", i);
    }

    printf("\n");

    i = 0;
    do
    {
        printf("%d\n", i);
        i++;
    } while (i <= 100);

    return 0;
}