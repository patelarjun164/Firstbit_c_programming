#include <stdio.h>
#include <stdlib.h>

void checkPrime(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==1 || arr[i]==0) continue;
        int isPrime = 1;
        for (int j = 2; j * j <= arr[i]; j++)
        {
            if (arr[i] % j == 0)
            {
                isPrime = 0;
                break;
            }
        }
        isPrime && printf("%d ", arr[i]);
    }
}

int main()
{
    int n;
    printf("Enter the size of an array:\n");
    scanf("%d", &n);

    int* arr = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Enter the value at index %d: ", i);
        scanf("%d", &arr[i]);
    }

    checkPrime(arr, n);

    return 0;
}