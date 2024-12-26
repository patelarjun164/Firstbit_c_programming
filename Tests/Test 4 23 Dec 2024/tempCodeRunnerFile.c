#include<stdio.h>

int findPower(int base, int exponent){
    int pow = 1;
    while(exponent--) pow *= base;
    return pow;
}

int main(){
    int base, exponent;
    printf("Enter the value of Base\n");
    scanf("%d", &base);
    printf("Enter the value of Exponent\n");
    scanf("%d", &exponent);

    printf("%d^%d = %d", base, exponent, findPower(base, exponent));
    return 0;
}