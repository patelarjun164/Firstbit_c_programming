#include <stdio.h>
#include <math.h>
// if 123 is num, and 1^3 + 2^3 + 3^3 = 123, then its armstrong num
// example 153 = 1 + 125+ 27 is armstrong num
// 1634 = 1^4 + 6^4 + 3^4 + 4^4

void printArmstrongNum(int *);

int main()
{
    printf("Start\n");
    int num;
    printf("Enter a number upto which u want to armstrong nums:\n");
    scanf("%d", &num);
    printArmstrongNum(&num);
    printf("End\n");
    return 0;
}

void printArmstrongNum(int *num)
{
    for (int i = 1; i <= *num; i++)
    {

        int temp = i, sum = 0, count = 0;
        // find length of number to find exponent
        while (temp > 0)
        {
            count++;
            temp /= 10;
        }

        // temp becomes 0, so ressign for further use
        temp = i;
        while (temp > 0)
        {
            int rem = temp % 10;
            // cal power of rem
            int power = 1, exponent = count;
            while (exponent--)
            {
                power *= rem;
            }
            sum += power;
            temp /= 10;
        }
        sum == i &&printf("%d ", i);
    }
}