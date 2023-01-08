#include <stdio.h>

int main()
{
    int emp_category;
    float basic_salary,bonus_amount,bonus;

    printf("Enter the Employee Category:");
    scanf("%d", &emp_category);

    printf("Enter the Basic Salary:");
    scanf("%f", &basic_salary);

    if(emp_category == 1) {  
        bonus = 5;
    }
    else if(emp_category == 2) {
        bonus = 10;
    }
    else  {
        bonus = 15;
    }
    bonus_amount = basic_salary * bonus/100;
    printf("The Bonus Amount is %.2f\n",  bonus_amount);

    return 0;

}