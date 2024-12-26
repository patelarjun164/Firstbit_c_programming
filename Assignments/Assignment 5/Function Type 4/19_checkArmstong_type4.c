#include <stdio.h>
#include <math.h>
// if 123 is num, and 1^3 + 2^3 + 3^3 = 123, then its armstrong num
//example 153 = 1 + 125+ 27 is armstrong num
//1634 = 1^4 + 6^4 + 3^4 + 4^4

int checkArmStrong(int);

int main()
{
    printf("Start\n");
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    // checkArmStrong(num);
    checkArmStrong(num) ? printf("Number is Armstrong\n") : printf("Number is Not an Armstrong\n");
    printf("End\n");
    return 0;
}

int checkArmStrong(int num){
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
        for (int i = 1; i <= tempCount; i++)
        {
            power *= rem;
        }
        
        // printf("Power = %d\n", power);
        sum += power;
        temp /= 10;
    }

    // sum == num ? printf("Number is Armstrong\n") : printf("Number is Not an Armstrong\n");
    return sum == num;
}