#include<stdio.h>
#include<string.h>

typedef struct Product{
    int id;
    char name[30];
    int quantity;
    int price;
} Product;

void storeStrct(Product* prdt, int n){
    for (int i = 0; i < n; i++)
    {
        printf("Enter product id\n");
        scanf("%d", &prdt[i].id);
        printf("Enter product name\n");
        scanf("%s", prdt[i].name);
        printf("Enter quantity\n");
        scanf("%d", &prdt[i].quantity);
        printf("Enter price\n");
        scanf("%d", &prdt[i].price);
    }
}
void printStrct(Product* prdt, int n){
    for (int i = 0; i < n; i++)
    {
        printf("\nid-> %d  Name-> %s  quantity->%d  price->%d totalAmount->%d rs.\n", prdt[i].id, prdt[i].name, prdt[i].quantity, prdt[i].price, prdt[i].quantity * prdt[i].price);
    }
}


int main(){
    Product p[2];

    p[1].id = 2;
    strcpy(p[1].name, "Milk");
    p[1].quantity = 5;
    p[1].price = 40;

    storeStrct(p, 1);
    printStrct(p, 2);
    return 0;
}