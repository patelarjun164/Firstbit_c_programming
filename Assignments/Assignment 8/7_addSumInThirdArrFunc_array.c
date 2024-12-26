/*
7. Take two array and add sum in third array
Examplearr[
5]= {1,2, 3, 4,5}
brr[5]={10,20,30, 40, 50}
crr[5]={11,22,33,44,55}
*/

#include<stdio.h>

void storeArr(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        printf("Enter the value at index %d: ", i);
        scanf("%d", &arr[i]);
    }
}

void findSum(int arr[], int brr[], int size){
    int crr[size];
    for (int i = 0; i < size; i++)
    {
        crr[i] = arr[i]+ brr[i];
        printf("%d ", crr[i]);
    }   
}

int main(){
    int n;
    printf("Enter the size of an array:\n");
    scanf("%d", &n);

    int arr[n], sum = 0;

    //taking arr 1 from user 
    printf("------Array 1 - arr --------\n");
    storeArr(arr,n);

    int brr[n], crr[n];

    //taking brr (2) from user 
    printf("------Array 2 - brr --------\n");
    storeArr(brr,n);

    //find sum and adding in crr in respective element
    findSum(arr,brr, n);
    return 0;
}