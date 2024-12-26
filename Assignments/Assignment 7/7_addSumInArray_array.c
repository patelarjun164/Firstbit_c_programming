/*
7. Take two array and add sum in third array
Examplearr[
5]= {1,2, 3, 4,5}
brr[5]={10,20,30, 40, 50}
crr[5]={11,22,33,44,55}
*/

#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of an array:\n");
    scanf("%d", &n);

    int arr[n], sum = 0;

    //taking arr 1 from user 
    printf("------Array 1 - arr --------\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value at index %d: ", i);
        scanf("%d", &arr[i]);
    }

    int brr[n], crr[n];

    //taking brr (2) from user 
    printf("------Array 1 - arr --------\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value at index %d: ", i);
        scanf("%d", &brr[i]);
    }

    //find sum and adding in crr in respective element
    for (int i = 0; i < n; i++)
    {
        crr[i] = arr[i] + brr[i];
        printf("crr[%d] = %d\n",i, crr[i]);
    }
    return 0;
}