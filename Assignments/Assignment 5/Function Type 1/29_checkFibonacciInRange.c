#include<stdio.h>
//0 1 1 2 3 5 8 13 21 34 55

void printFibonacciInRange();

int main(){
    printf("Start\n");
    printFibonacciInRange();
    printf("End\n");
    
    return 0;
}

void printFibonacciInRange() {
    int num, first =0, second = 1, next = 0;
    printf("Enter a number upto which u want to print fibonacci series\n");
    scanf("%d", &num);

    while (next<=num)
    {
        printf("%d ", next);
        first = second;
        second = next;
        next = first + second;
    }
}