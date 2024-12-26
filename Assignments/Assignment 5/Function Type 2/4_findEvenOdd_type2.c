#include <stdio.h>
int checkEvenOdd();
int main()
{
    printf("Start\n");
    checkEvenOdd() ? printf("Even Number\n") : printf("Odd Number\n");
    printf("End\n");
    return 0;
}

int checkEvenOdd()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    // num % 2 ? printf("%d is odd num\n", num) : printf("%d is even num\n", num);
    return !num%2;
}