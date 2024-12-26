#include<stdio.h>

void findFactorial();

int main(){
    printf("Start\n");
    findFactorial();
    printf("End\n");
    return 0;
}

void findFactorial() {
    int num, fact = 1;
    printf("Enter a number:\n");
    scanf("%d", &num);
    int temp =num;

    for(int i=num; i>0;i--){
        fact *= i;
    }
    printf("%d! = %d\n",temp, fact);
    // return fact;
}