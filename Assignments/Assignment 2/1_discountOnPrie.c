#include<stdio.h>
#include<conio.h>
int main(){
    int price = 1000;
    int discount;
    printf("Enter discount percentage Example: 20\n");
    scanf("%d", &discount);
    printf("Your net price to be paid is:  %d", price - ((price*discount)/100));
    return 0;
}