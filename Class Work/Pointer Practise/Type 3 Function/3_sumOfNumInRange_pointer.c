#include<stdio.h>


void sumInRange(int* l, int* u){
    int sum = 0;
    for (int i = *l; i <= *u; i++)
    {
        
        sum += i;
    }
    
    // printf("Sum of numbers from %d to %d is %d", lowerTemp, upperTemp, sum);
    printf("Sum of numbers from %d to %d is %d", *l, *u, sum);
}

int main(){
    int lower, upper;
    printf("Enter num from which u want sum(Lower limit)\n");
    scanf("%d", &lower);
    printf("Enter num to which u want sum(Upper limit)\n");
    scanf("%d", &upper);

    sumInRange(&lower, &upper);
    
    return 0;
}
