#include <stdio.h>

int main(void)
{
    int base = 0;
    int exponent = 0;

    printf("Enter base     : ");
    scanf("%d", &base);

    printf("Enter exponent : ");
    scanf("%d", &exponent);

    int result = 1;

    for (int i = 0; i < exponent; i++)
    {
        result *= base;
    }

    printf("\n");

    printf("%d to the power of %d is %d\n", base, exponent, result);

    return 0;
}