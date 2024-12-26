#include<stdio.h>

int findFactorial(int);

int main(){
    printf("Start\n");
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    printf("%d! = %d\n",num, findFactorial(num));
    // findFactorial(num);
    printf("End\n");
    return 0;
}

int findFactorial(int num) {
    int temp =num, fact =1;

    for(int i=num; i>0;i--){
        fact *= i;
    }
    // printf("%d! = %d\n",temp, fact);
    return fact;
}