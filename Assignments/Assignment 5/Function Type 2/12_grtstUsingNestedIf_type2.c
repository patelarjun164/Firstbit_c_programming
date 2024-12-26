#include<stdio.h>
int findGreatest();

int main(){
    printf("Start\n");
    printf("%d is greatest\n",findGreatest());
    printf("End\n");
    return 0;
}

int findGreatest(){
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
            // printf("A is Greatest of three.\n");
            return a;
        }
        else
        {
            // printf("C is Greatest of three.\n");
            return c;
        }
        
    } else {
        if(b>c){
            // printf("B is Greatest of three.\n");
            return b;
        }
        else {
            // printf("C is Greatest of three.\n");
            return c;
        }
    }
}