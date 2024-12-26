#include <stdio.h>
void checkPrime(int num)
{
    int isPrime;
    for (int i = 2; i * i <= num; i++)
    {
        isPrime = 1;
        if (num % i == 0)
        {
            isPrime = 0;
            break;
        }
    }
    if (isPrime)
    {
        printf("%d ", num);
    }
}

int main()
{
    int num, isPrime = 1, j;
    printf("Enter number upto which u want to check prime of\n");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        checkPrime(i);
    }
    return 0;
}