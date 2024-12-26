#include<stdio.h>
int main(){
    int base, exponent, power = 1;
    printf("Enter Base:\n");
    scanf("%d", &base);
    printf("Enter Exponent:\n");
    scanf("%d", &exponent);
    //store exponent to temp as its become 0 at last
    int expoTemp = exponent;

    while(exponent--){
        power *= base;
    }

    printf("%d ^ %d = %d", base, expoTemp, power);
    return 0;
}