#include<stdio.h>

void calNetPrice();

int main(){
    printf("Start\n");
    calNetPrice();
    printf("End\n");
    return 0;
}

void calNetPrice(){
    int price, discount;
    printf("Enter price:\n");
    scanf("%d", &price);
    printf("Enter discount percentage Example: 20\n");
    scanf("%d", &discount);
    printf("Your net price to be paid is:  %d\n", price - ((price*discount)/100));
}