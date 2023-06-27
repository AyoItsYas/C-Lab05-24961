#include <stdio.h>

int main(void)
{
    int marks[10];

    printf("Enter marks of 10 students (seperated by a space): ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &marks[i]);
    }

    printf("\n");

    int max = marks[0];
    int min = marks[0];
    int sum = 0;

    for (int i = 0; i < 10; i++)
    {
        if (marks[i] > max)
            max = marks[i];
        if (marks[i] < min)
            min = marks[i];
        sum += marks[i];
    }

    printf("Maximum marks : %d\n", max);
    printf("Minimum marks : %d\n", min);
    printf("Average marks : %d\n", sum / 10);

    return 0;
}