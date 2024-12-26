#include <stdio.h>

int checkPrime(int);

int main()
{
    printf("Start\n");
    int num;
    printf("Enter number u want to check prime of\n");
    scanf("%d", &num);
    // checkPrime(num);
    checkPrime(num) ? printf("Num is Prime Number\n"): printf("Num is NOT a Prime Number\n");
    printf("End\n");

    return 0;
}

int checkPrime(int num){
    for (int i = 2; i*i <= num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}