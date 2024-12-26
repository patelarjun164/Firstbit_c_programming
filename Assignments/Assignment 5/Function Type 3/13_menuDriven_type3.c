#include <stdio.h>

void checkEvenOdd(int);
void calculateSalary(float);

int main()
{
    int choiceNum;
    printf("----Choices-----\n");
    printf("Enter 1 for calculate Even odd\n");
    printf("Enter 2 for calculate Salary\n");
    scanf("%d", &choiceNum);

    if (choiceNum == 1)
    {
        // checkEvenOdd() ? printf("EVEN number\n") : printf("ODD number\n");
        int num;
        printf("Enter number to check weather number is even or odd.\n");
        scanf("%d", &num);
        checkEvenOdd(num);
    }
    else if (choiceNum == 2)
    {
        // printf("Salary is %.2f\n",calculateSalary());
        float basic;
        printf("Enter Basic salary\n");
        scanf("%f", &basic);
        calculateSalary(basic);
    }
    else
    {
        printf("Invalid Choice\n");
    }

    return 0;
}

void checkEvenOdd(int num)
{

    num % 2 ? printf("%d is Odd Number\n", num) : printf("%d is Even number\n", num);
    // return !num%2;
}

void calculateSalary(float basic)
{

    float salary;
    if (basic <= 5000)
    {
        salary = basic + (basic * 10) / 100 + (basic * 20) / 100 + (basic * 30) / 100;
    }
    else
        salary = basic + (basic * 15) / 100 + (basic * 25) / 100 + (basic * 30) / 100;

    printf("Salary is %.2f\n", salary);
    // return salary;
}