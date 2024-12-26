#include <stdio.h>
void checkEvenOdd();
int main()
{
    printf("Start\n");
    checkEvenOdd();
    printf("End\n");
    return 0;
}

void checkEvenOdd()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    num % 2 ? printf("%d is odd num\n", num) : printf("%d is even num\n", num);
}