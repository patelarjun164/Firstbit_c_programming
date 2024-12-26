#include <stdio.h>
void gstBill(float);
int main()
{
    float amount;
    printf("Enter bill Amount\n");
    scanf("%f", &amount);
    // printf("Total amount to be paid --> %.2f\n", gstBill());
    gstBill(amount);
    return 0;
}

void gstBill(float amount)
{
    
    printf("Total amount to be paid %.2f", amount + (amount * 18) / 100);
    // return amount + (amount * 18) / 100;
}