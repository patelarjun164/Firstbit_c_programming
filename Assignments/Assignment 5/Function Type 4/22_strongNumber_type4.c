#include <stdio.h>
// num is called strong if its sum of its digit's factorial is same as num
// ex: 145, 1! + 4!+ 5! = 145

int checkStrongNum();

int main()
{
    printf("Start\n");
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    checkStrongNum(num) ? printf("Num is Strong Num\n") : printf("Num is NOT a Strong Num\n");
    // checkStrongNum(num);
    printf("End\n");
    return 0;
}

int checkStrongNum(int num) {
    int temp = num, rem, sum = 0;
    while (temp > 0)
    {
        rem = temp % 10;

        //--------Factorial Calculation-------
        // find factorial of rem
        int factorial = 1;
        while (rem > 0)
        {
            factorial *= rem;
            rem--;
        }
        
        // add factorial of rem to sum
        sum += factorial;

        // continue
        temp /= 10;
    }

    return sum==num;
}