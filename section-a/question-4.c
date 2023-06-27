#include <stdio.h>

int main(void)
{
    int number = 0;
    int sum = 0;

    printf("Enter a number : ");
    scanf("%d", &number);

    while (number > 0)
    {
        sum += number % 10;
        number /= 10;
    }

    printf("\n");

    printf("Sum of digits is %d\n", sum);

    return 0;
}