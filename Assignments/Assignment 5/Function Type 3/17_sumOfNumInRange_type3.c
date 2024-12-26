#include<stdio.h>
void sumInRange(int, int);
int main(){
    int lower, upper;
    printf("Enter Lower limit and Upper limit of Range\n");
    scanf("%d %d", &lower, &upper);

    sumInRange(lower, upper);
    return 0;
}

void sumInRange(int lower, int upper){
    int sum=0;
    for (int i = lower; i <= upper; i++)
    {
        sum += i;
    }
    printf("Sum of Num from %d to %d is %d", lower, upper, sum);
}