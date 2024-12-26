#include<stdio.h>
int sumInRange(int, int);
int main(){
    int lower, upper;
    printf("Enter Lower limit and Upper limit of Range\n");
    scanf("%d %d", &lower, &upper);

    printf("Sum of Num from %d to %d is %d", lower, upper, sumInRange(lower, upper));
    return 0;
}

int sumInRange(int lower, int upper){
    int sum=0;
    for (int i = lower; i <= upper; i++)
    {
        sum += i;
    }
    return sum;
}