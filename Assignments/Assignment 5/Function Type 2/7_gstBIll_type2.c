#include <stdio.h>
float gstBill();
int main()
{
    printf("Start\n");
    printf("Total amount to be paid --> %.2f\n", gstBill());
    printf("End\n");
    return 0;
}

float gstBill()
{
    float amount, total;
    printf("Enter bill Amount\n");
    scanf("%f", &amount);
    // printf("Total amount to be paid %.2f", amount + (amount * 18) / 100);
    return amount + (amount * 18) / 100;
}