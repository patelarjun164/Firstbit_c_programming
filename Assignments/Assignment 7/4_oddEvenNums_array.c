#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of an array:\n");
    scanf("%d", &n);

    int arr[n], sum = 0;
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value at index %d: ", i);
        scanf("%d", &arr[i]);
    }

    //print even number
    printf("--------Even Nums in Array-------\n");
    for (int i = 0; i < n; i++)
    {
        !(arr[i]%2) && printf("%d ", arr[i]);
    }
    //print odd number
    printf("\n--------Odd Nums in Array-------\n");
    for (int i = 0; i < n; i++)
    {
        arr[i]%2 && printf("%d ", arr[i]);
    }
    
    return 0;
}