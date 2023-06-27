#include <stdio.h>

int main(void)
{
    int i = 0;
    int factorial = 1;
    int number = 0;

    printf("Enter a number : ");
    scanf("%d", &number);

    for (i = 1; i <= number; i++)
    {
        factorial *= i;
    }

    printf("\n");

    printf("Factorial of %d is %d\n", number, factorial);

    return 0;
}