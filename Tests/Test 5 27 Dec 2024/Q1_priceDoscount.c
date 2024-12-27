 #include<stdio.h>
//question wrong needed profit term to calculate sp

float calSellPrice(float costPrice, int discount){
    return (costPrice*discount) / 100;
}

 int main(){
    float costPrice;
    int discount;


    printf("Enter cost price of product.\n");
    scanf("%f", &costPrice);
    printf("Enter discount\n");
    scanf("%d", &discount);

    printf("Selling price is %.2f", costPrice + calSellPrice(costPrice, discount));
    return 0;
 }