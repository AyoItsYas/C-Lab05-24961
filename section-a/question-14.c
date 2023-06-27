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

    printf("[ ");
    int tog = 0;
    for (int i = 0; i < 10; i++)
    {
        if (tog == 0)
            tog = 1;
        else
            printf(", ");

        printf("%d ", arr[i]);
    }
    printf("]");

    printf("\n");

    return 0;
}