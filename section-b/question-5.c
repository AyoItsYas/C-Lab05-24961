#include <stdio.h>

int main(void)
{
    int employeeNo = 0;
    int hoursWorked = 0;
    int count = 0;

    while (employeeNo != -999)
    {
        printf("Enter the Employee no : ");
        scanf("%d", &employeeNo);

        if (employeeNo != -999)
        {
            printf("Enter the Hours Worked : ");
            scanf("%d", &hoursWorked);

            int overTimePayment = 0;
            if (hoursWorked > 40)
            {
                overTimePayment = (hoursWorked - 40) * 200 + 40 * 150;
            }
            else
            {
                overTimePayment = hoursWorked * 150;
            }

            printf("Employee No : %d\n", employeeNo);
            printf("Over Time Payment : %d\n", overTimePayment);

            if (overTimePayment > 4000)
            {
                count++;
            }
            printf("\n");
        }
    }

    return 0;
}