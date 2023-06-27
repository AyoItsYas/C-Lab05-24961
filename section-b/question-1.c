#include <stdio.h>

int main(void)
{
    int arr[10];

    printf("Enter 10 numbers (seperated by a space): ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\n");

    int pos = 0;
    int neg = 0;
    int zero = 0;

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > 0)
            pos++;
        else if (arr[i] < 0)
            neg++;
        else
            zero++;
    }

    printf("Number of positive numbers : %2d\n", pos);
    printf("Number of negative numbers : %2d\n", neg);
    printf("Number of zeros            : %2d\n", zero);

    return 0;
}