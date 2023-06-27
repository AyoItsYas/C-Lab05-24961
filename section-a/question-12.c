#include <stdio.h>

int main(void)
{
    int num;

    printf("Enter a number : ");
    scanf("%d", &num);

    printf("\n");

    printf("Factors of %d are : ", num);

    int i = 0;
    int tog = 0;
    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            if (tog == 0)
            {
                tog = 1;
            }
            else
            {
                printf(", ");
            }

            printf("%d", i);
        }
    }

    printf("\n");

    return 0;
}