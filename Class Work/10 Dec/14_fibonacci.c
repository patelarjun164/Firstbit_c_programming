#include<stdio.h>
//0 1 1 2 3 5 8 13 21 34 55
int main(){
    int num, first =0, second = 1, next = 0;
    printf("Enter a number\n");
    scanf("%d", &num);

    while (next<=num)
    {
        printf("%d ", next);
        first = second;
        second = next;
        next = first + second;
    }
    
    return 0;
}