#include<stdio.h>

int storeNSum(int arr[], int size){
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        printf("Enter the value at index %d: ", i);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    return sum;
}

int main(){
    int n;
    printf("Enter the size of an array:\n");
    scanf("%d", &n);

    int arr[n];

    printf("Sum of all elements of array is %d", storeNSum(arr,n));
    return 0;
}