#include <stdio.h>
void checkPrime(int* num)
{
    for (int j = 1; j <= *num; j++)
    {
        int isPrime;
        for (int i = 2; i * i <= j; i++)
        {
            isPrime = 1;
            if (j % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
        {
            printf("%d ", j);
        }
    }
}

int main()
{
    int num, isPrime = 1, j;
    printf("Enter number upto which u want to check prime of\n");
    scanf("%d", &num);
    
    checkPrime(&num);

    return 0;
}