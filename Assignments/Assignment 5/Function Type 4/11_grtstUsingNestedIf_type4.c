#include<stdio.h>
int findGreatest(int, int, int);

int main(){
    printf("Start\n");
    int a,b,c;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    printf("Enter the value of c: ");
    scanf("%d",&c);
    // findGreatest(a,b,c);
    printf("%d is greatest\n",findGreatest(a,b,c));
    printf("End\n");
    return 0;
}

int findGreatest(int a, int b,int c){
    // int greatest;
    if(a>b){
        if (a>c)
        {
            // printf("A is Greatest of three.\n");
            // greatest = a;
            return a;
        }
        else
        {
            // printf("C is Greatest of three.\n");
            // greatest = c;
            return c;
        }
        
    } else {
        if(b>c){
            // printf("B is Greatest of three.\n");
            return b;
            // greatest = b;
        }
        else {
            // printf("C is Greatest of three.\n");
            return c;
            // greatest = c;
        }
    }
    // printf("%d is Greatest of three.\n", greatest);
}