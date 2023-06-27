#include <stdio.h>

int main(void)
{
    int number = 0;
    int reverse = 0;

    printf("Enter a number : ");
    scanf("%d", &number);

    do
    {
        reverse = reverse * 10 + number % 10;
        number /= 10;
    } while (number > 0);

    printf("\n");

    printf("Reverse of number is %d\n", reverse);

    return 0;
}