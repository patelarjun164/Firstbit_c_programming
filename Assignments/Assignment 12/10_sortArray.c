#include <stdio.h>
#include <stdlib.h>

void displayArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
}

void storeArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Enter the value for index %d: ", i);
        scanf("%d", &arr[i]);
    }
}

void sortArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
    int n;
    printf("Enter the size of an array:\n");
    scanf("%d", &n);

    int* arr = (int*) malloc(n * sizeof(int));

    // taking arr from user
    storeArr(arr,n);

    //sort array
    sortArray(arr, n);

    // printing array
    displayArr(arr,n);
    free(arr);
    return 0;
}