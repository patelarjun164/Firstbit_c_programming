#include<stdio.h>
int main(){
    int lower, upper, sum=0;
    printf("Enter num from which u want sum(Lower limit)\n");
    scanf("%d", &lower);
    printf("Enter num to which u want sum(Upper limit)\n");
    scanf("%d", &upper);
    // int lowerTemp = lower, upperTemp = upper;

    // while(lower<=upper){
    //     sum += lower;
    //     lower++;2
    // }
    for (int i = lower; i <= upper; i++)
    {
        
        sum += i;
    }
    
    // printf("Sum of numbers from %d to %d is %d", lowerTemp, upperTemp, sum);
    printf("Sum of numbers from %d to %d is %d", lower, upper, sum);
    return 0;
}