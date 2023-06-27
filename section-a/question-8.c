#include <stdio.h>

int main(void)
{
    int num, remainder, result = 0;

    printf("Enter a three-digit integer: ");
    scanf("%d", &num);

    printf("\n");

    int originalNum = num;

    if (originalNum < 100 || originalNum > 999)
    {
        printf("Invalid input! Please enter a three-digit integer.");
        return 0;
    }

    while (originalNum != 0)
    {
        remainder = originalNum % 10;
        result += remainder * remainder * remainder;
        originalNum /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
}