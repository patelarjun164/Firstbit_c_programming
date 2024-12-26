#include<stdio.h>

void storeArr(int *arr, int size)
{ 
    for (int i = 0; i < size; i++)
    {
        printf("Enter value for index %d: ", i);
        scanf("%d", &arr[i]);
    }
}

void printAlternate(int arr[], int size){
    for (int i = 0; i < size; i=i+2)
    {
        printf("%d ", arr[i]);
    }
}

int main(){
    int n;
    printf("Enter the size of an array:\n");
    scanf("%d", &n);

    int arr[n];
    storeArr(arr, n);
    printAlternate(arr, n);
    return 0;
}