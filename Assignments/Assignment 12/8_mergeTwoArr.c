#include<stdio.h>
#include<stdlib.h>

void storeArr(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        printf("Enter the value at index %d: ", i);
        scanf("%d", &arr[i]);
    }
}
void displayArr(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int* mergeArr(int arr1[], int size1, int arr2[], int size2){
    int n3 = size1+size2;
    int* arr3 = (int*) malloc(n3 * sizeof(int));
    for (int i = 0; i < size1+size2 ; i++)
    {
        arr3[i] = i<size1 ? arr1[i] : arr2[i-size1];
    }
    return arr3;
}

int main(){
    int n1;
    printf("Enter the size of an array1:\n");
    scanf("%d", &n1);

    int arr1[n1];

    //taking arr 1 from user
    printf("-----Enter values for Array 1-----\n"); 
    storeArr(arr1, n1);

    int n2;
    printf("Enter the size of an array1:\n");
    scanf("%d", &n2);

    int arr2[n2], n3 = n1+n2;

    //taking arr 2 from user 
    printf("-----Enter values for Array 2-----\n"); 
    storeArr(arr2,n2);

    //adding values from arr1 to arr3
    int* arr3 = mergeArr(arr1, n1, arr2, n2);
    
    
    //printing arr3
    displayArr(arr3, n3);
    
    return 0;
}