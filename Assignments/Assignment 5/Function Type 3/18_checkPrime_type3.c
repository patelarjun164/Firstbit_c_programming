#include <stdio.h>

void checkPrime(int);

int main()
{
    printf("Start\n");
    // checkPrime() ? printf("Num is Prime Number\n"): printf("Num is NOT a Prime Number\n");
    int num;
    printf("Enter number u want to check prime of\n");
    scanf("%d", &num);
    checkPrime(num);
    printf("End\n");

    return 0;
}

void checkPrime(int num){
    int isPrime = 1;
    for (int i = 2; i*i <= num; i++)
    {
        if (num % i == 0)
        {
            isPrime = 0;
        }
    }
    isPrime ? printf("Num is Prime Number\n"): printf("Num is NOT a Prime Number\n");
}