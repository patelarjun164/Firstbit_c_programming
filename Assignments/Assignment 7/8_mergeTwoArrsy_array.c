#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of an array:\n");
    scanf("%d", &n);

    int arr1[n], arr2[n];

    //taking arr 1 from user
    printf("-----Enter values for Array 1-----\n"); 
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value at index %d: ", i);
        scanf("%d", &arr1[i]);
    }

    //taking arr 2 from user 
    printf("-----Enter values for Array 2-----\n"); 
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value at index %d: ", i);
        scanf("%d", &arr2[i]);
    }

    int arr3[2*n];
    //adding values from arr1 to arr3
    for (int i = 0; i < n; i++)
    {
        arr3[i] = arr1[i];
    }
    //adding values from arr2 to arr3
    for (int i = n; i < 2*n; i++)
    {
        arr3[i] = arr2[i-n]; //i=4, arr[]
    }
    
    
    //printing arr3
    for (int i = 0; i < 2*n; i++)
    {
        printf("%d ", arr3[i]);
    }
    
    return 0;
}