#include <stdio.h>

int main()
{
    int lowerLimit, upperLimit, sum = 0,i;
    printf("Enter lower limit of range greater than 0\n");
    scanf("%d", &lowerLimit);
    while(lowerLimit<0){
        printf("Enter lower limit of range greater than 0\n");
        scanf("%d", &lowerLimit);
    }
    printf("Enter upper limit of range greater than 0\n");
    scanf("%d", &upperLimit);
    while(lowerLimit<0){
        printf("Enter lower limit of range greater than 0\n");
        scanf("%d", &lowerLimit);
    }
    for (i = lowerLimit; i <= upperLimit; i++)
    {
        if(i==0 || i==1) continue;
        int isPrime = 1;
        for (int j = 2; j*j <= i; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if(isPrime)
        {
            printf(" %d +", i);
            sum += i;
        }
    }
    printf("\b= %d\n", sum);

    return 0;
}