#include<stdio.h>
int main(){
    int num, i=0;
    printf("Enter a number upto which u want series: \n");
    scanf("%d", &num);

    while(i<=num){
        printf("%d ", i);
        i += 5;
    }

    return 0;
}