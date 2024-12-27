 #include<stdio.h>
//question wrong needed profit term to calculate sp
//assumption  - profit is zero

float calSellPrice(float costPrice, int discount){
    return (costPrice*discount) / 100;
}

 int main(){
    float costPrice;
    int discount;
    int profit = 0;

    printf("Enter cost price of product.\n");
    scanf("%f", &costPrice);
    printf("Enter discount\n");
    scanf("%d", &discount);

    printf("Selling price is %.2f\n", costPrice + (costPrice*profit)/100 - calSellPrice(costPrice, discount));
    printf("Profit is %d%\n", profit);
    return 0;
 }