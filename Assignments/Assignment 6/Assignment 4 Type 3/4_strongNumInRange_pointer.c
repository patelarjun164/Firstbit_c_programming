#include <stdio.h>
// num is called strong if its sum of its digit's factorial is same as num
// ex: 145, 1! + 4!+ 5! = 145

// not optimized as in will open and close function stack frame multiple time

void checkStrong(int* num)
{
    for (int i = 1; i <= *num; i++)
    {
        int temp = i, rem, sum = 0;
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
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);

    checkStrong(&num);
    return 0;
}