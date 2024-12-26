#include<stdio.h>

void storeArr(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Enter value for index %d: ", i);
        scanf("%d", &arr[i]);
    }
}

void printOddEven(int arr[], int size){
    printf("\n--------Even Nums in Array-------\n");
    for (int  i = 0; i < size; i++)
        !(arr[i]%2) && printf("%d ", arr[i]);

    printf("\n--------Odd Nums in Array-------\n");
    for (int  i = 0; i < size; i++)
        arr[i]%2 && printf("%d ", arr[i]);   
}

int main(){
    int n;
    printf("Enter the size of an array:\n");
    scanf("%d", &n);

    int arr[n];
    storeArr(arr, n);
    printOddEven(arr, n);
        
    return 0;
}