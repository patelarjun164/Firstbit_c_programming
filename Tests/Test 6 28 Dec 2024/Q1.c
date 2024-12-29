#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void storeArr(int* arr, int n){
    for (int i = 0; i < n; i++)
    {
        printf("Enter element for index %d: ", i);
        scanf("%d", &arr[i]);
    }
}

void findCommon(int* arr, int*brr, int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(arr[i]==brr[j]){
                printf("%d ", arr[i]);
            }
        }   
    }
}

int main(){
    int n;
    printf("Enter n");
    scanf("%d", &n);
    int arr[n];
    int brr[n];

    storeArr(arr, n);
    storeArr(brr, n);
    findCommon(arr, brr, n);
    return 0;
}