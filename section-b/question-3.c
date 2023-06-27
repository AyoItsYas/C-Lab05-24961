#include <stdio.h>

int main(void)
{
    int sum = 0;
    int num = 0;
    int count = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Enter price of item %d : ", i + 1);
        scanf("%d", &num);

        sum += num;

        if (num > 200)
        {
            count++;
        }
    }

    printf("\nAverage price of an item = %d\n", sum / 10);
    printf("Number of items which the price is greater than 200 = %d\n", count);

    return 0;
}