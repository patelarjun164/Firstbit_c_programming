#include <stdio.h>
// 121, 1331, 12321

int checkPalindrome(int);

int main()
{
    printf("Start\n");
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    checkPalindrome(num) ? printf("Num is Palindrome\n") : printf("Num is NOT Palindrome\n");
    // checkPalindrome(num);
    printf("End\n");
    return 0;
}

int checkPalindrome(int num) {
    int temp = num, rem, rev = 0;
    while (temp > 0)
    {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp /= 10;
    }

    return num==rev;
    // if (num == rev)
    //     printf("%d is a Palindrome number\n", num);
    // else
    //     printf("%d is NOT a Palindrome number\n", num);
}