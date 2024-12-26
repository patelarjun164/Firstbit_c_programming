#include<stdio.h>
int main(){
    int n, i=0, sum =0;
    printf("Enter a number upto which u want sum:\n");
    scanf("%d", &n);

    while (i<=n)
    {
       sum += i;
       printf("%d ", i);
       i += 2; 
    }
    
    printf("Sum of odd numbers from 1 to %d is %d", n, sum);
    return 0;
}