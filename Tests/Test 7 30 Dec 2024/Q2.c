#include<stdio.h>

void printArr(int* arr, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
}

int checkPalindrome(int* arr, int n){
    for (int i = 0; i <= n/2; i++)
        if(arr[i]!= arr[n-i-1]) return 0;
    return 1;
}

int main(){
    int n;
    printf("Enter n\n");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter value for index %d: ", i);
        scanf("%d", &arr[i]);
    }

    printArr(arr, n);
    checkPalindrome(arr, n) ? printf("\nPalindrome"): printf("\nNot Palindrome");
    return 0;
}