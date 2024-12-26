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

int searchInArray(int arr[], int size, int num)
{
    for (int i = 0; i < size; i++)
        if (arr[i] == num)
            return i;
    return -1;
}

int main()
{
    int n;
    printf("Enter the size of an array:\n");
    scanf("%d", &n);

    int searchNum;
    int* arr = (int*)malloc(n * sizeof(int));
    storeArr(arr, n);
    printf("\nEnter a number u want to search in array\n");
    scanf("%d", &searchNum);

    int res = searchInArray(arr, n, searchNum);

    res==-1 ? printf("Number not found in array\n") : printf("%d found at index %d",searchNum, res);

    free(arr);
    arr=NULL;

    return 0;
}