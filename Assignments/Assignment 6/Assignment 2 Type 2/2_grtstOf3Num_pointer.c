#include<stdio.h>
void findGreatest(int*, int*, int*);

int main(){
    printf("Start\n");
    int a,b,c;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    printf("Enter the value of c: ");
    scanf("%d",&c);
    findGreatest(&a,&b,&c);
    printf("End\n");
    return 0;
}

void findGreatest(int* a, int* b,int* c){
    int greatest;
    if(*a>*b){
        if (*a>*c)
        {
            greatest = *a;
        }
        else
        {
            greatest = *c;
        }
        
    } else {
        if(*b>*c){
            greatest = *b;
        }
        else {
            greatest = *c;
        }
    }
    printf("%d is Greatest of three.\n", greatest);
}