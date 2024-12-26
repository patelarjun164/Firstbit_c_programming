#include<stdio.h>

/*
print even and odd numbers in given range
 */
int main(){
    int start, end;
    printf("Enter Start value\n");
    scanf("%d", &start);
    printf("Enter End value\n");
    scanf("%d", &end);

    printf("-----Even Numbers-----\n");
    for (int i = start; i <= end; i++)
    {
        !(i%2) && printf("%d ", i);
    }

    printf("\n-----Odd Numbers-----\n");
    for (int i = start; i <= end; i++)
    {
        i%2 && printf("%d ", i);
    }
    
    return 0;
}