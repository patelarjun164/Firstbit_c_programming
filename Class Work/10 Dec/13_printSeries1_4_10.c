//1 4 10 22 46
// 3 3*2   24
#include<stdio.h>
int main(){
    int num, i=1, k=3;
    printf("Enter a number: \n");
    scanf("%d",&num);

    while(i<=num){
        printf("%d ", i); //1 4 10 22 
        i = i+k; //4 10 22
        k = k*2; //6 12 24
    }
    return 0;
}