#include<stdio.h>

float calBalance(float amount){
    int n;
    printf("1. Deposit\n");
    printf("2. Withdraw\n");
    scanf("%d" ,&n);

    if (n==1)
    {
        int depositAmount;
        printf("Enter amount to deposit\n");
        scanf("%d", &depositAmount);
        amount += depositAmount;
    } else if(n==2) {
        if (amount<3000)
        {
            printf("can't withdraw the amount balance is not sufficient\n");
            return -1;
        }
        int withDrawAmount;
        printf("Enter amount to withdraw\n");
        scanf("%d", &withDrawAmount);
        if(withDrawAmount<amount){
            amount -= withDrawAmount;
        }
        else printf("can't withdraw the amount balance is not sufficient\n");
    } else {
        printf("Invalid Choice...!");
        return -1;
    }
    return amount;
}


int main(){
    float amount=5000;

    float res = calBalance(amount);

    if(res!=-1) printf("Net Balance: %.2f\n",res);
    
    return 0;
}