#include<stdio.h>
#include<string.h>

typedef struct Product{
    int id;
    char name[30];
    int quantity;
    int price;
} Product;

void storeStrct(Product* prdt){
        printf("Enter product id\n");
        scanf("%d", &prdt->id);
        printf("Enter product name\n");
        scanf("%s", prdt->name);
        printf("Enter quantity\n");
        scanf("%d", &prdt->quantity);
        printf("Enter price\n");
        scanf("%d", &prdt->price);
}
void printStrct(Product* prdt){
        printf("\nid-> %d  Name-> %s  quantity->%d  price->%d totalAmount->%d rs.\n", prdt->id, prdt->name, prdt->quantity, prdt->price, prdt->quantity * prdt->price);
}


int main(){
    Product p;

    storeStrct(&p);
    printStrct(&p);
    return 0;
}