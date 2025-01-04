#include <stdio.h>
#include <string.h>

/*
Point of Sale System: Build a simple point of sale system using structures to represent products with attributes like name, price, and quantity. Allow users to add items to a cart and calculate the total cost.
*/

typedef struct Products
{
    int id;
    char name[30];
    double price;
} Products;

typedef struct CartItems
{
    Products p1;
    int quantity;
} CartItems;

void fgetsInput(char *str, size_t size)
{
    fflush(stdin);
    if (fgets(str, size, stdin))
    {
        // Remove newline character from fgets
        int len = strlen(str);
        if (len > 0 && str[len - 1] == '\n')
        {
            str[len - 1] = '\0';
        }
    }
}

void displayAll(Products *p, int n)
{
    printf("----------------------------------\n");
    printf("|  Id  |    Product     | Price  |\n");
    printf("|------|----------------|--------|\n");
    for (int i = 0; i < n; i++)
    {
        int len = strlen(p[i].name);
        printf("|  %d   ", p[i].id);
        printf("| %s", p[i].name);
        for (int i = 1; i <= 15 - len; i++)
        {
            printf(" ");
        }
        i == 3 && printf("| %.2lf |\n", p[i].price);
        i != 3 && printf("| %.2lf  |\n", p[i].price);
    }
    printf("----------------------------------\n");
}
// void displayByIndex(Products *p, int i)
// {
//     printf("Name -> %s | ", p[i].name);
//     printf("Matchs Played -> %d | ", p[i].noOfMatches);
//     printf("Runs -> %d | ", p[i].runs);
//     printf("Wickets -> %d\n", p[i].wickets);
// }

// void storeStruct(Players *p, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("---Players %d---\n", i + 1);
//         printf("Enter name of the Players\n");
//         fgetsInput(p[i].name, sizeof(p[i].name));
//         printf("Enter No of matching played\n");
//         scanf("%d", &p[i].noOfMatches);
//         printf("Enter runs score by player\n");
//         scanf("%d", &p[i].runs);
//         printf("Enter wickets taken by player\n");
//         scanf("%d", &p[i].wickets);
//     }
// }

void generateAndDisplayBill(CartItems *c, int* n)
{
    double totalAmount = 0;
    printf("-------------------------------------------------------\n");
    printf("|  Id  |    Product     | Price  | Quantity |  Total  |\n");
    printf("|------|----------------|--------|----------|---------|\n");
    for (int i = 0; i < *n; i++)
    {
        int len = strlen(c[i].p1.name);
        printf("|  %d   ", i+1);
        printf("| %s", c[i].p1.name);
        for (int i = 1; i <= 15 - len; i++)
        {
            printf(" ");
        }
        // printf("| %.2lf  \n", c[i].p1.price);
        c[i].p1.id == 3 && printf("| %.2lf ", c[i].p1.price);
        c[i].p1.id != 3 && printf("| %.2lf  ", c[i].p1.price);
        printf("|  %d      ", c[i].quantity);
        printf("| %.2lf |\n", c[i].quantity * c[i].p1.price);
        totalAmount += c[i].quantity * c[i].p1.price;

    }
    printf("-------------------------------------------------------\n");
    printf("                     Total Amount to pay ---> %.2lf\n\n\n", totalAmount);
}

void addToCart(CartItems *c, Products *p, int *i)
{
    int choice=1, pid;
    while (choice)
    {
        printf("Enter Product id of product want to add to cart\n");
        scanf("%d", &pid);
        //adding product at index sent from main
        c[*i].p1 = p[pid - 1];
        printf("Enter quantity\n");
        scanf("%d", &c[*i].quantity);
        // printf("%d %d  \n", *i , c[*i].quantity);
        (*i)++;

        printf("\nPress 1 to Add more items\n");
        printf("Press 0 to generate bill\n");
        scanf("%d", &choice);
        if(choice) displayAll(p,5);
    }
    generateAndDisplayBill(c, &(*i));
}

void hardCodedProducts(Products *p)
{
    p[0].id = 1;
    strcpy(p[0].name, "Milk");
    p[0].price = 30;

    p[1].id = 2;
    strcpy(p[1].name, "Pen");
    p[1].price = 10;

    p[2].id = 3;
    strcpy(p[2].name, "Chips");
    p[2].price = 20;

    p[3].id = 4;
    strcpy(p[3].name, "Washing Powder");
    p[3].price = 150;

    p[4].id = 5;
    strcpy(p[4].name, "Soap");
    p[4].price = 20;
}

int main()
{
    int cartItemIndex = 0;
    Products p[5];
    CartItems c[50];
    // storeStruct(p, 3);
    hardCodedProducts(p);
    displayAll(p, 5);

    addToCart(c, p, &cartItemIndex);
    // displayTableToppers(p, 3);

    return 0;
}