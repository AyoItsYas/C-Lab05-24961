#include <stdio.h>

int main(void)
{
    int employeeNo = 0;
    int basicSalary = 0;
    int count = 0;

    while (employeeNo != -999)
    {
        printf("Enter the Employee no : ");
        scanf("%d", &employeeNo);

        if (employeeNo != -999)
        {
            printf("Enter the Basic Salary : ");
            scanf("%d", &basicSalary);

            if (basicSalary >= 5000)
            {
                count++;
            }
        }
    }

    printf("\nNumber of Employees whose Basic Salary >= 5000 : %d\n", count);

    return 0;
}