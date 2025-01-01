#include<stdio.h>

void swapPos(int* arr, int xPos, int yPos){
    int temp = arr[xPos];
    arr[xPos] = arr[yPos];
    arr[yPos] = temp;
}

void printArr(int* arr, int n){
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
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

    int xPos, yPos;
    printf("Enter x position\n");
    scanf("%d", &xPos);
    printf("Enter y position\n");
    scanf("%d", &yPos);
    xPos--;
    yPos--;

    printf("Before swap\n");
    printArr(arr, n);
    swapPos(arr, xPos, yPos);
    printf("\nAfter swap\n");
    printArr(arr, n);
    
    return 0;
}