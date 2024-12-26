#include <stdio.h>

// for type 1, there ain't return type or parameter , so use of type 1 function just increase repeatation, instead of reusing the code

void showChoices();

int main()
{
    printf("Start\n");
    showChoices();
    printf("End\n");
    
    return 0;
}

void showChoices(){
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
        printf("%d %c %d = %d\n", num1, operator, num2, num1 + num2);
    }
    else if (operator== '-')
    {
        printf("%d %c %d = %d\n", num1, operator, num2, num1 - num2);
    }
    else if (operator== '*')
    {
        printf("%d %c %d = %d\n", num1, operator, num2, num1 * num2);
    }
    else if (operator== '/')
    {
        printf("%d %c %d = %d\n", num1, operator, num2, num1 / num2);
    }
    else if (operator== '%')
    {
        printf("%d %c %d = %d\n", num1, operator, num2, num1 % num2);
    }
}