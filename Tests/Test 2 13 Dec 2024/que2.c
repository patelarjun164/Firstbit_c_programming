//check num is +ve, -ve, or zero
#include<stdio.h>
int main(){
    int num;
    printf("Enter Num\n");
    scanf("%d", &num);

    if (num<0)
    {
        printf("%d is negative number\n", num);
    }
    else if(num>0){
        printf("%d is positive number\n", num);
    }
    else if(num==0) {
        printf("%d is neutral\n",num);
    }
    else printf("Invalid Input!!!");
    
    return 0;
}