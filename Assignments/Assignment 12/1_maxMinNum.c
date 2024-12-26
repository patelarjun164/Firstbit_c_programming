#include <stdio.h>
#include <stdlib.h>

void storeArr(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Enter value for index %d: ", i);
        scanf("%d", &arr[i]);
    }
}

void printArr(int arr[], int size)
{
    printf("[ ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ,", arr[i]);
    }
    printf("\b ]");
}

int *findMaxNMinEle(int arr[], int size)
{
    int *maxMinArr = (int *)malloc(2 * sizeof(int));
    int max = arr[0], min = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    maxMinArr[0] = min;
    maxMinArr[1] = max;
    return maxMinArr;
}

int main()
{
    int n;
    printf("\nEnter the size of array\n");
    scanf("%d", &n);
    int arr[n];
    storeArr(arr, n);

    printf("\nLargest number in array is %d\n", findMaxNMinEle(arr, n)[1]);
    printf("Smallest number in array is %d\n", findMaxNMinEle(arr, n)[0]);

    return 0;
}