#include <stdio.h>

// for type 2, there ain't return type, so we can not send any value to function for process, so again we have to take input again and again, doesn't make sense, it'll increase repeatation

int showChoices();

int main()
{
    printf("Start\n");
    printf("Answer is %d\n", showChoices());
    printf("End\n");
    
    return 0;
}

int showChoices(){
    int num1, num2;
    char operator;
    printf("Enter the value of number 1: ");
    scanf("%d", &num1);
    printf("Enter the value of number 2: ");
    scanf("%d", &num2);

    printf("------Enter your choice :------\n");
    printf("For Addition enter '+'\n");
    printf("For Subtraction enter '-'\n");
    printf("For Multiplication enter '*'\n");
    printf("For Divivsion enter '/'\n");
    printf("For Modulo enter '%'\n");
    
    fflush(stdin);
    scanf("%c", &operator);

    if (operator== '+')
    {
        // printf("%d %c %d = %d\n", num1, operator, num2, num1 + num2);
        return num1+num2;
    }
    else if (operator== '-')
    {
        // printf("%d %c %d = %d\n", num1, operator, num2, num1 - num2);
        return num1-num2;
    }
    else if (operator== '*')
    {
        // printf("%d %c %d = %d\n", num1, operator, num2, num1 * num2);
        return num1*num2;
    }
    else if (operator== '/')
    {
        // printf("%d %c %d = %d\n", num1, operator, num2, num1 / num2);
        return num1 / num2;
    }
    else if (operator== '%')
    {
        // printf("%d %c %d = %d\n", num1, operator, num2, num1 % num2);
        return num1 % num2;
    }
}