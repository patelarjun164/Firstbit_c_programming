#include <stdio.h>
void gstBill();
int main()
{
    printf("Start\n");
    gstBill();
    printf("End\n");
    return 0;
}

void gstBill()
{
    float amount, total;
    printf("Enter bill Amount\n");
    scanf("%d", &amount);
    printf("Total amount to be paid %.2f", amount + (amount * 18) / 100);
}