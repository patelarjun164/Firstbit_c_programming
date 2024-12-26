#include<stdio.h>
#include<conio.h>
int main(){
    int c =  printf("\0");
    // int result = printf("\0") || printf("\n") || printf("hello");
    // printf("result = %d", result);
    // printf("result = %d", c);
    
    int a = 0;
    int b = 5;
    // a = 10;
    // b = 10;

    // a = 0;
    // b = 0;
    
    // a = 0;
    // b = 10;

    // a = 10;
    // b = 0;

    // a = 1;
    // b = 0;
    printf("%d && %d -> %d\n",a , b, a && b);
    printf("%d || %d -> %d",a,b, a || b);

    return 0;
}