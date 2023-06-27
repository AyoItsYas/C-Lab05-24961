#include <stdio.h>

int main(void)
{
    int sum = 0;
    int num = 0;

    while (num != -1)
    {
        printf("Enter a number : ");
        scanf("%d", &num);

        if (num != -1)
        {
            sum += num;
        }
    }

    printf("\nSum = %d\n", sum);

    return 0;
}