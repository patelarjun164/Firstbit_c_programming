#include<stdio.h>
int main(){
    int num, i=1, sum=0;
    printf("Enter a number upto which u want sum of natural num:\n");
    scanf("%d", &num);
    // while(i<=num){
    //     sum += i;
    //     i++;
    // }
    // printf("Sum of natural number from 1 to %d is %d", num, sum);
    printf("Sum of natural number from 1 to %d is %d", num, (num * (num +1))/2);
    return 0;
}