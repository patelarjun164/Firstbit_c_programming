#include <stdio.h>
int main()
{
    int num, isPrime = 1;
    printf("Enter number u want to check prime of\n");
    scanf("%d", &num);

    // if num can be divided with 2 to num-1, its not prime
    // int i = 2;
    // while (i < num)   
    // {
    //     if (num % i == 0)
    //     { 
    //         isPrime = 0;
    //         break;
    //     }
    //     i++;
    // }
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

    return 0;
}