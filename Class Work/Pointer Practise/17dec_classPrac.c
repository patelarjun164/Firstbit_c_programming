#include<stdio.h>

void swap(int* a, int* b){
    int temp = *a;
    a = *b;
    printf("%d", a);
    printf("%d", *a);
    *b = temp;
}

int main(){
    int a = 10 ;
    int b = 20;
    printf("------before swaping------\n");
    printf("a = %d, b= %d \n", a,b);
    swap(&a, &b);
    printf("------After swaping------\n");
    printf("a = %d, b= %d \n", a,b);

    return 0;
}