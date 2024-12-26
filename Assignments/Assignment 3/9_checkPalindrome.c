#include <stdio.h>
// 121, 1331, 12321
int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);

    int temp = num, rem, rev = 0;
    while (temp > 0)
    {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp /= 10;
    }

    if (num == rev)
        printf("%d is a Palindrome number\n", num);
    else
        printf("%d is NOT a Palindrome number\n", num);
    return 0;
}