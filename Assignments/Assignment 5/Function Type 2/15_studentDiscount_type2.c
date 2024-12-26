#include <stdio.h>

int checkIsStudent();

int main()
{
    printf("Start\n");

    float price;
    int discount;
    printf("\nEnter price: ");
    scanf("%f", &price);

    // check validation
    if (checkIsStudent())
    {
        discount = price > 500 ? 20 : 10;
    }
    else
    {
        discount = price > 600 ? 15 : 0;
    }

    printf("You got %d\% Discount\n", discount);
    printf("You have to pay %.2f rs.\n", price - (price * discount) / 100);
    printf("End\n");
    return 0;
}

int checkIsStudent()
{
    char checkStudent;
    printf("If your are student than press 'Y', else press 'N'\n");
    fflush(stdin);
    scanf("%c", &checkStudent);

    if (checkStudent == 'y' || checkStudent == 'Y')
    {
        return 1;
    }
    else if (checkStudent == 'n' || checkStudent == 'N')
    {
        return 0;
    }
    printf("Invalid choice for student elligibility\n");
    return 0;
}