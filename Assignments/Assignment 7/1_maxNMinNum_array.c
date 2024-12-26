#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array\n");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value at index %d: ", i);
        scanf("%d", &arr[i]);
    }
    int max = arr[0], min = arr[0];
    for (int i = 0; i < n; i++)
    {
        printf("Value at index %d: %d\n", i, arr[i]);
        if(arr[i]<min){
            min = arr[i];
        }
        if(arr[i]>max){
            max = arr[i];
        }
    }
    printf("\nLargest number in array is %d\n", max);
    printf("Smallest number in array is %d\n", min);
    
    return 0;
}