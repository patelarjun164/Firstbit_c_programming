#include <stdio.h>
int checkEvenOdd(int);
int main()
{
    int num;
    printf("Enter Number:\n");
    scanf("%d", &num);
    // checkEvenOdd() ? printf("Even Number\n") : printf("Odd Number\n");
    checkEvenOdd(num) ? printf("%d is Even num\n", num) : printf("%d is odd num\n", num);
    return 0;
}

int checkEvenOdd(int num)
{
    // num % 2 ? printf("%d is odd num\n", num) : printf("%d is even num\n", num);
    return !num%2;
}