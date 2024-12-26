#include <stdio.h>
int main()
{
    int num, count = 0;
    printf("Enter a number:\n");
    scanf("%d", &num);
    int temp = num;

    while (num)
    {
        count++;
        num/=10;
    }
    printf("total digit in %d is %d", temp, count);
    return 0;
}