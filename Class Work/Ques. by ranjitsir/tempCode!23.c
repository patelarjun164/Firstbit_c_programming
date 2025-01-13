#include <stdio.h>
#include <string.h>

typedef struct Product
{
    char name[20];
    int price;
    int stock;
} Product;

typedef struct CartItem
{
    Product p;
    int quantity;
} CartItem;

void hardcodeData(Product *p)
{
    // Product-1 Info
    strcpy(p[0].name, "Pen");
    p[0].price = 10;
    p[0].stock = 5;

    // Product-2 Info
    strcpy(p[1].name, "Note Book");
    p[1].price = 20;
    p[1].stock = 5;

    // Product-3 Info
    strcpy(p[2].name, "Ball");
    p[2].price = 10;
    p[2].stock = 5;

    // Product-4 Info
    strcpy(p[3].name, "Pencil");
    p[3].price = 10;
    p[3].stock = 5;

    // Product-5 Info
    strcpy(p[4].name, "Bat");
    p[4].price = 10;
    p[4].stock = 5;
}

void getTotalBill(Product *P, CartItem *c, int *cartproductcoun)
{
    int choice=1;
    int buyProduct;
    int quantity;
    

    while (choice != 0)
    {
        int buyproduct = 0;
        printf("\n--------- Product List --------\n");
        printf("-------------------------------\n");
        printf("|  Product \t\tPrice |\n");
        printf("-------------------------------\n");

        for (int i = 0; i < 5; i++)
        {
            printf("| %d. %s\t\t %d\n", i + 1, P[i].name, P[i].price);
        }
        printf("-------------------------------\n");

        printf("Enter What you want to Buy : ");
        scanf("%d", &buyProduct);
        char PName[20];
        if (buyProduct == 1)
            strcpy(PName, "Pen");
        else if (buyProduct == 2)
            strcpy(PName, "Note Book");
        else if (buyProduct == 3)
            strcpy(PName, "Ball");
        else if (buyProduct == 4)
            strcpy(PName, "Pencil");
        else
            strcpy(PName, "Bat");

        printf("Enter Quantity :");
        scanf("%d", &quantity);

        // int i, j;
        for (int i = 0, j = *cartproductcoun; i < 5; i++)
        {
            if (strcasecmp(PName, P[i].name) == 0)
            {
                if (quantity <= P[i].stock)
                {
                    c[j].p = P[i];
                    c[j].quantity = quantity;
                    (*cartproductcoun)++;
                    P[i].stock = P[i].stock - quantity;
                    j++;
                    break;
                }
                else
                {
                    printf("This much quatity not pesent");
                    break;
                }
            }
        }

        printf("\nIf you want to buy another item press-1 OR Do you want your Total Bill Press-0 :");
        scanf("%d", &choice);
    }

    // printf("\n%d \n", *cartproductcoun);
    printf("\nCart product are :\n\n");
    for (int i = 0; i < *cartproductcoun; i++)
    {
        printf("Product Name : %s\n", c[i].p.name);
        printf("Product Price : %d\n", c[i].p.price);
        printf("Product stock : %d\n", c[i].p.stock);
        printf("Quantity you Buy : %d\n", c[i].quantity);
        printf("\n");
    }

    int totalBill = 0;

    for (int i = 0; i < *cartproductcoun; i++)
    {
        totalBill = totalBill + c[i].quantity * c[i].p.price;
    }
    printf("-------------------------------------------\n");
    printf("Your Total Bill is : %d", totalBill);
}

void main()
{
    int size = 5;
    int cartproductcoun = 0;
    Product p[size];
    CartItem c[20];

    // Function calls

    hardcodeData(p);
    getTotalBill(p, c, &cartproductcoun);
}