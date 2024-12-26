#include <stdio.h>

void checkPrime(int* num){
    int isPrime = 1;
    for (int i = 2; i*i <= *num; i++)
    {
        if (*num % i == 0)
        {
            isPrime = 0;
            break;
        }
    }
    
    if (isPrime)
        printf("%d is a Prime Number\n", *num);
    else
        printf("%d is NOT a Prime Number\n", *num);
}

int main()
{
    int num, isPrime = 1;
    printf("Enter number u want to check prime of\n");
    scanf("%d", &num);

    checkPrime(&num);
    return 0;
}