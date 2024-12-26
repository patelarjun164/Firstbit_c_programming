#include<stdio.h>
int main(){
    int num, fact = 1;
    printf("Enter a number:\n");
    scanf("%d", &num);
    int temp =num;

    // while(num>0){
    
    //     fact *=  num;
    //     num--;
    // }
    for(int i=num; i>0;i--){
        fact *= i;
    }
    printf("%d! = %d",temp, fact);

    return 0;
}