#include <stdio.h>
// 121, 1331, 12321

int checkPalindrome();

int main()
{
    printf("Start\n");
    checkPalindrome() ? printf("Num is Palindrome\n") : printf("Num is NOT Palindrome\n");
    printf("End\n");
    return 0;
}

int checkPalindrome() {
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

    return num==rev;
    // if (num == rev)
    //     printf("%d is a Palindrome number\n", num);
    // else
    //     printf("%d is NOT a Palindrome number\n", num);
}