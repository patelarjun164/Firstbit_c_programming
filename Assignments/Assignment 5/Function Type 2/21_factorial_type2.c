#include<stdio.h>

int findFactorial();

int main(){
    printf("Start\n");
    printf("Answer is %d\n", findFactorial());
    printf("End\n");
    return 0;
}

int findFactorial() {
    int num, fact = 1;
    printf("Enter a number:\n");
    scanf("%d", &num);
    int temp =num;

    for(int i=num; i>0;i--){
        fact *= i;
    }
    // printf("%d! = %d",temp, fact);
    return fact;
}