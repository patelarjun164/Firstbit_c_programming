#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of an array:\n");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value at index %d: ", i);
        scanf("%d", &arr[i]);
    }
    int searchNum, flag= 1;
    printf("Enter a number u want to search in array\n");
    scanf("%d", &searchNum);

    for (int i = 0; i < n; i++)
    {
        if(arr[i]==searchNum){
            printf("%d is on index: %d\n", searchNum, i);
            flag = 0;
            break;
        }
    }
    if (flag)
    {
        printf("%d is not available in array\n", searchNum);
    }
    
    return 0;
}