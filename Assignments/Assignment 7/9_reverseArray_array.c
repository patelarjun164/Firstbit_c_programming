#include<stdio.h>

void reverseArray(int arr[], int n){
    for (int i = 0; i <= n/2; i++)
    {
        int temp = arr[i];  //1 2
        arr[i] = arr[n-i-1];  //a[0] = a[3-0-1] = a[2] = 3 2
        arr[n-i-1] = temp; // a[2] = temp = 1 2

        // printf("%d ", arr[i]);
    }

    //printng reversed array
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }  
}

int main(){
    int n;
    printf("Enter the size of an array:\n");
    scanf("%d", &n);

    int arr[n];

    //taking arr from user
    printf("-----Enter values for Array 1-----\n"); 
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value at index %d: ", i);
        scanf("%d", &arr[i]);
    }

    //reverse array
    reverseArray(arr,n);
    
    return 0;
}