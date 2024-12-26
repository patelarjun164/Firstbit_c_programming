#include<stdio.h>
#include<conio.h>
int main(){
    
    int a = 20;
    int b = 10;
    int c = a+b;
    printf("Sum of %d and %d is %d\n",a,b,c);
    c = a-b;
    printf("Subtraction of %d and %d is %d\n",a,b,c);
    c = a*b;
    printf("Multiplication of %d and %d is %d\n",a,b,c);
    c = a/b;
    printf("Division of %d and %d is %d\n",a,b,c);
    return 0;
}