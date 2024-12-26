#include<stdio.h>
#include<conio.h>
int main(){
    int num;
    printf("Enter any number\n");
    scanf("%d", &num);

    if(num%2==0 && num%3==0){
        printf("%d is divisible by 2 and 3 both",num);
    }
    else if(num%2==0){
        printf("%d is divisible by 2, but not divisible by 3\n", num);
    }
    else if(num%3==0){
        printf("%d is divisible by 3, but not divisible by 2\n",num);
    }
    else printf("%d is neither divided by 2 nor 3!\n",num);
    return 0;
}