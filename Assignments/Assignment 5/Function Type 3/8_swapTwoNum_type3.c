#include<stdio.h>

void swapToNum(int, int);

int main(){
    int a,b;
    printf("Enter the value of a:\n");
    scanf("%d", &a);
    printf("Enter the value of b:\n");
    scanf("%d", &b);
    swapToNum(a,b);
    printf("End\n");
    return 0;
}

void swapToNum(int a, int b){
    // ---before swapping----
    printf("---before swapping----\n");
    printf("a=%d, b=%d\n",a,b);

    //---after swapping----
    int temp = a;
    a = b;
    b = temp;
    printf("---after swapping----\n");
    printf("a=%d, b=%d\n",a,b);
}