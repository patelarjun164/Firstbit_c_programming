#include<stdio.h>

int calNetPrice();

int main(){
    printf("Start\n");
    printf("Your net price to be paid is:  %d\n", calNetPrice());
    printf("End\n");
    return 0;
}

int calNetPrice(){
    int price, discount;
    printf("Enter price:\n");
    scanf("%d", &price);
    printf("Enter discount percentage Example: 20\n");
    scanf("%d", &discount);
    // printf("Your net price to be paid is:  %d\n", price - ((price*discount)/100));
    return price - (price*discount)/100;
}