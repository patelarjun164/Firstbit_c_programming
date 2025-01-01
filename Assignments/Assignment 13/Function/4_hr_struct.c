#include<stdio.h>
#include<string.h>

typedef struct HR{
    int id;
    char name[30];
    int salary;
    int commision;
} HR;

void storeStrct(HR* h, int n){
    for (int i = 0; i < n; i++)
    {
        printf("Enter id\n");
        scanf("%d", &h[i].id);
        printf("Enter name\n");
        scanf("%s", h[i].name);
        printf("Enter salary\n");
        scanf("%d", &h[i].salary);
        printf("Enter Commision\n");
        scanf("%d", &h[i].commision);
    }
}
void printStrct(HR* h, int n){
    for (int i = 0; i < n; i++)
    {
        printf("\nid-> %d  Name-> %s  Salary->%d Commision->%d\n", h[i].id, h[i].name, h[i].salary, h[i].commision);
    }
}


int main(){
    struct HR h[2];
    storeStrct(h, 2);
    printStrct(h, 2);
    return 0;
}