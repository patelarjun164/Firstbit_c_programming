#include<stdio.h>
int main(){
    int num, i=1;
    printf("Enter a number upto which u want series: \n");
    scanf("%d", &num);

    while(i*i<=num){
        printf("%d ", i*i);
        i++;
    }

    return 0;
}