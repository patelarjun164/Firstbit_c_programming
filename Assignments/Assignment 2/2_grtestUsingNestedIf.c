#include<stdio.h>
#include<conio.h>
int main(){
    int a,b,c;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    printf("Enter the value of c: ");
    scanf("%d",&c);

    if(a>b){
        if (a>c)
        {
            printf("A is Greatest of three.");
        }
        else
        {
            printf("C is Greatest of three.");
        }
        
    } else {
        if(b>c){
            printf("B is Greatest of three.");
        }
        else {
            printf("C is Greatest of three.");
        }
    }
    return 0;
}