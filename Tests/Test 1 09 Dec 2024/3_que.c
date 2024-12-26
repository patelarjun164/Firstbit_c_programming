#include <stdio.h>
#include <conio.h>
// print last 2 digit of temp
// 223413 --> 13
int main()
{
    int num, temp;
    printf("Enter any number\n");
    scanf("%d", &num);
    temp = num;

    int ld = temp % 10; // 3
    temp = temp / 10;
    int sld = temp % 10; // 1
    int lastTwoDig = sld * 10 + ld;

    if ((ld == 0 && sld == 0) || num == 0)
    {
        printf("Last 2 digits of %d is 00\n", num);
    }
    else
    {
        printf("Last 2 digits of %d is %d\n", num, lastTwoDig);
    }
    return 0;
}