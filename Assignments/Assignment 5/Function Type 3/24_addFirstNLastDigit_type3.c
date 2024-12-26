#include<stdio.h>
#include<math.h>
//add first and and last digit of given num

void findFirstNLastDigSum(int);

int main(){
    printf("Start\n");
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    // printf("Sum of first and last digit of number is %d\n", findFirstNLastDigSum());
    findFirstNLastDigSum(num);
    printf("End\n");
    return 0;
}

void findFirstNLastDigSum(int num){
    int temp = num, lastDigit, firstDigit, lengthOfNum=0;
    lastDigit = temp%10;

    //logic 2 for find 1st digit of num
    while (temp>0)
    {
        firstDigit = temp%10;
        temp /= 10;
    }
    
    // return firstDigit + lastDigit;
    printf("Sum of first digit(%d) + last Digit(%d) = %d\n", firstDigit, lastDigit, firstDigit+lastDigit);
}