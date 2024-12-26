//calculate electricity bill
/*
1-50 units --> 30 rs/unit
51-150 units --> 40 rs/unit
>151 units --> 50 rs/unit
*/
#include<stdio.h>
int main(){
    float unitCount, perUnitCharge, billAmount;
    printf("Enter unit that is used by user\n");
    scanf("%f", &unitCount);

    if(unitCount>=1 && unitCount<=50){
        perUnitCharge = 30;
    } 
    else if(unitCount>= 51 && unitCount<=150){
        perUnitCharge = 40;
    }
    else if(unitCount>150){
        perUnitCharge = 50;
    }
    else{
        printf("Invalid input\n");
        return 0;
    }

    printf("Total Amount to be paid is %.2f", perUnitCharge * unitCount);
    return 0;
}