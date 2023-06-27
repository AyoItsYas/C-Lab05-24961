#include <stdio.h>

int main(void)
{
    int arr[10];
    int count = 0;

    printf("Enter 10 numbers (seperated by a space): ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\n");

    printf("[ ");
    int tog = 0;
    for (int i = 0; i < 10; i++)
    {
        if (tog == 0)
            tog = 1;
        else
            printf(", ");

        printf("%d ", arr[i]);

        if (arr[i] % 2 == 0)
            count++;
    }
    printf("]");

    printf("\n");

    printf("Count of even numbers: %d\n", count);

    return 0;
}