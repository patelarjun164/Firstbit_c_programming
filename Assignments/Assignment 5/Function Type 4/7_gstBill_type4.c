#include <stdio.h>
float gstBill(float);
int main()
{
    float amount;
    printf("Enter bill Amount\n");
    scanf("%f", &amount);
    printf("Total amount to be paid --> %.2f\n", gstBill(amount));
    // gstBill(amount);
    return 0;
}

float gstBill(float amount)
{
    return amount + (amount * 18) / 100;
}