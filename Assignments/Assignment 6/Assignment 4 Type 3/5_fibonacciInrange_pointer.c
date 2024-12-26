#include<stdio.h>
//0 1 1 2 3 5 8 13 21 34 55

void printFibonacciInRange(int*);

int main(){
    printf("Start\n");
    int num;
    printf("Enter a number upto which u want to print fibonacci series\n");
    scanf("%d", &num);

    printFibonacciInRange(&num);
    printf("End\n");
    
    return 0;
}

void printFibonacciInRange(int* num) {
    int first =0, second = 1, next = 0;

    while (next<=*num)
    {
        printf("%d ", next);
        first = second;
        second = next;
        next = first + second;
    }
}