#include <stdio.h>

void checkIsStudent(char, float);

int main()
{
    printf("Start\n");

    float price;
    int discount;
    printf("\nEnter price: ");
    scanf("%f", &price);

    char checkStudent;
    printf("If your are student than press 'Y', else press 'N'\n");
    fflush(stdin);
    scanf("%c", &checkStudent);

    // check validation
    // if (checkIsStudent(checkStudent))
    // {
    //     discount = price > 500 ? 20 : 10;
    // }
    // else
    // {
    //     discount = price > 600 ? 15 : 0;
    // }
    checkIsStudent(checkStudent, price);

    // printf("You got %d\% Discount\n", discount);
    // printf("You have to pay %.2f rs.\n", price - (price * discount) / 100);
    printf("End\n");
    return 0;
}

void checkIsStudent(char checkStudent, float price)
{
    int discount;
    if (checkStudent == 'y' || checkStudent == 'Y')
    {
        discount = price > 500 ? 20 : 10;
        // return 1;
    }
    else if (checkStudent == 'n' || checkStudent == 'N')
    {
        discount = price > 600 ? 15 : 0;
        // return 0;
    }
    else
        printf("Invalid choice for student elligibility\n");

    printf("You got %d\% Discount\n", discount);
    printf("You have to pay %.2f rs.\n", price - (price * discount) / 100);
    // return 0;
}