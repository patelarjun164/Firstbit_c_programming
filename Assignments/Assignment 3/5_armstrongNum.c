#include <stdio.h>
#include <math.h>
// if 123 is num, and 1^3 + 2^3 + 3^3 = 123, then its armstrong num
//example 153 = 1 + 125+ 27 is armstrong num
//1634 = 1^4 + 6^4 + 3^4 + 4^4
int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);

    int temp = num, sum = 0, count =0;

    //find length of number to find exponent
    while(temp>0){
        count++;
        temp /= 10;
    }
    printf("Count = %d\n", count);

    //temp becomes 0, so ressign for further use
    temp = num;
    while (temp > 0)
    {
        int rem = temp % 10;
        //cal power of rem
        int power = 1, tempCount = count;
        // while(tempCount--){
        //     power *= rem;
        // }
        for (int i = 1; i <= tempCount; i++)
        {
            power *= rem;
        }
        
        printf("Power = %d\n", power);
        sum += power;
        temp /= 10;
    }

    sum == num ? printf("%d is an armstrong number\n", num) : printf("%d is not An Armstrong number\n", num);
    return 0;
}