#include<stdio.h>
#include<string.h>

struct Product{
    int id;
    char name[30];
    int quantity;
    int price;
};

int main(){
    struct Product p1, p2;
    p1.id = 1;
    printf("Enter Name of product1\n");
    scanf("%s", p1.name);
    printf("Enter quantity for product1\n");
    scanf("%d", &p1.quantity);
    printf("Enter price for product1\n");
    scanf("%d", &p1.price);

    p2.id = 2;
    strcpy(p2.name, "Milk");
    p2.quantity = 5;
    p2.price = 40;

    printf("\nid-> %d  Name-> %s  quantity->%d  price->%d totalAmount->%d rs.\n", p1.id, p1.name, p1.quantity, p1.price, p1.quantity * p1.price);
    printf("\nid-> %d  Name-> %s  quantity->%d  price->%d totalAmount->%d rs.\n", p2.id, p2.name, p2.quantity, p2.price, p2.quantity * p2.price);
    return 0;
}