#include<stdio.h>
#include<stdlib.h>

void storeArr(int* arr, int n){
    for (int i = 0; i < n; i++)
    {
        printf("Enter element for index %d: ", i);
        scanf("%d", &arr[i]);
    }
}

int* findTwoMax(int* arr, int n){
    int max=arr[0], secMax=arr[0];
    int* maxArr = (int*) malloc(2 * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>max){
            secMax = max;
            max = arr[i];
        }
        else if(arr[i]>secMax){
            secMax = arr[i];
        }
    }
    maxArr[0] = max;
    maxArr[1] = secMax;
    return maxArr;
}

int main(){
    int n;
    printf("Enter n\n");
    scanf("%d", &n);
    int arr[n];
    storeArr(arr, n);

    int* ptr= findTwoMax(arr, n);
    printf("Max Num -> %d\nSecond max number -> %d\n", ptr[0], ptr[1]);
    free(ptr);
    return 0;
}