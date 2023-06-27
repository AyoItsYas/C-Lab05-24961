#include <stdio.h>

int main(void)
{
    int i = 0;
    int total = 0;
    int mark = 0;

    float average = 0.0f;

    for (i = 0; i < 10; i++)
    {
        printf("Enter mark %2d : ", i + 1);
        scanf("%d", &mark);

        total += mark;
    }

    average = (float)total / 10.0f;

    printf("\n");

    printf("Total         : %10d\n", total);
    printf("Average       : %10.2f\n", average);

    return 0;
}