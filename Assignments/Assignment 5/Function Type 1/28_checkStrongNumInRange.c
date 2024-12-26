#include <stdio.h>
// num is called strong if its sum of its digit's factorial is same as num
// ex: 145, 1! + 4!+ 5! = 145

void checkStrong()
{
    int num, i, temp, rem, sum;
    printf("Enter a number:\n");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        temp = i;
        sum = 0;
        while (temp > 0)
        {
            rem = temp % 10;

            //--------Factorial Part-------
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

        if (sum == i)
            printf("%d ", i);
    }
}

int main()
{
    checkStrong();
    return 0;
}