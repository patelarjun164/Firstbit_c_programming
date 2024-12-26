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
        sum += arr[i];
    }

    printf("Sum of all number of array is %d", sum);
    return 0;
}