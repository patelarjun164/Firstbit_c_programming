#include <stdio.h>

void checkPrime();

int main()
{
    printf("Start\n");
    checkPrime();
    printf("End\n");

    return 0;
}

void checkPrime(){
    int num, isPrime = 1;
    printf("Enter number u want to check prime of\n");
    scanf("%d", &num);

    for (int i = 2; i*i <= num; i++)
    {
        if (num % i == 0)
        {
            isPrime = 0;
            break;
        }
    }
    
    if (isPrime)
        printf("%d is a Prime Number\n", num);
    else
        printf("%d is NOT a Prime Number\n", num);
}