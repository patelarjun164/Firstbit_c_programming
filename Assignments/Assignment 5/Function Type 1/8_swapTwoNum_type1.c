#include<stdio.h>
#include<conio.h>

void swapToNum();

int main(){
    
    printf("Start\n");
    swapToNum();
    printf("End\n");
    return 0;
}

void swapToNum(){
    int a =2, b = 3, temp;
    // ---before swapping----
    printf("---before swapping----\n");
    printf("a=%d, b=%d\n",a,b);

    //---after swapping----
    temp = a;
    a = b;
    b = temp;
    printf("---after swapping----\n");
    printf("a=%d, b=%d\n",a,b);
}