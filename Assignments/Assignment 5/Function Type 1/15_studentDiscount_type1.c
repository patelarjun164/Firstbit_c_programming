#include <stdio.h>

void calSalary();

int main()
{
    printf("Start\n");
    calSalary();
    printf("End\n");
    return 0;
}

void calSalary() {
    char isStudent;
    float price;
    int discount;
    printf("\nEnter price: ");
    scanf("%f", &price);

    printf("If your are student than press 'Y', else press 'N'\n");
    fflush(stdin);
    scanf("%c", &isStudent);

    // check validation
    if(isStudent=='y' || isStudent=='Y'){
        discount = price > 500 ? 20 : 10;
    }
    else if(isStudent=='n' || isStudent=='N'){
        discount = price > 600 ? 15 : 0;
    }
    else{
        printf("Invalid choice for student elligibility\n");
    }

    printf("You got %d\% Discount\n", discount);
    printf("You have to pay %.2f rs.\n", price - (price * discount) / 100);
}