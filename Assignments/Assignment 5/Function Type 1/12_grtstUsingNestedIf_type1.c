#include<stdio.h>
void findGreatest();

int main(){
    printf("Start\n");
    findGreatest();
    printf("End\n");
    return 0;
}

void findGreatest(){
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
            printf("A is Greatest of three.\n");
        }
        else
        {
            printf("C is Greatest of three.\n");
        }
        
    } else {
        if(b>c){
            printf("B is Greatest of three.\n");
        }
        else {
            printf("C is Greatest of three.\n");
        }
    }
}