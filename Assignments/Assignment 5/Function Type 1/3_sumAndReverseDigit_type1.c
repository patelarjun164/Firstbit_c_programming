// find sum of 3 digit num and reverse it
#include<stdio.h>
void findSumOfDigits();

int main(){
    printf("Start\n");
    sumOfDigits();
    printf("End\n");
    return 0;
}

void sumOfDigits(){
    int temp = 123;
    int num = temp;
    int r1 = num %10; //3
    num = num /10; //12
    int r2 = num %10;
    int r3 = num /10;
    printf("Sum of %d is %d\n", temp, r1+r2+r3);
    printf("Reverse num of %d is %d\n", temp, (r1*100)+(r2*10)+r3);
}