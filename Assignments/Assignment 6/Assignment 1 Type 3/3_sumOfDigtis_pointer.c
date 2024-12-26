// find sum of 3 digit num and reverse it
#include<stdio.h>
void findSumOfDigits(int*);
void findReverse(int, int,int,int);

int main(){
    int num;
    printf("Enter a 3 digit number to find sum of digit: \n");
    scanf("%d", &num);
    findSumOfDigits(&num);
    return 0;
}

void findSumOfDigits(int* num){
    int temp = *num;
    int r1 = *num %10; //3
    *num = *num /10; //12
    int r2 = *num %10;
    int r3 = *num /10;
    printf("Sum of %d is %d\n", temp, r1+r2+r3);
    findReverse(r1,r2,r3, *num);
}

void findReverse(int r1, int r2, int r3, int num){
    printf("Reverse num of %d is %d\n", num, (r1*100)+(r2*10)+r3);
}