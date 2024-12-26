#include <stdio.h>

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

int findMinInArr(int arr[], int size)
{
    int min = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }
    return min;
}

int findMaxInArr(int arr[], int size)
{
    int max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

// int *findMaxNMinEle(int arr[], int size)
// {
//     int maxMinArr[2];
//     for (int i = 0; i < size; i++)
//     {
//         int max = arr[0], min = arr[0];
//         if (arr[i] < min)
//         {
//             maxMinArr[0] = arr[i];
//         }
//         if (arr[i] > max)
//         {
//             maxMinArr[1] = arr[i];
//         }
//     }
//     return maxMinArr;
// }

int main()
{
    int n;
    printf("\nEnter the size of array\n");
    scanf("%d", &n);

    int arr[n];
    storeArr(arr, n);
    printArr(arr, n);

    printf("\nLargest number in array is %d\n", findMaxInArr(arr, n));
    printf("Smallest number in array is %d\n", findMinInArr(arr, n));

    return 0;
}