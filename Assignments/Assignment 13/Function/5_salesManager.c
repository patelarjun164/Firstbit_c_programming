#include<stdio.h>
#include<string.h>

typedef struct SalesManager{
    int id;
    char name[30];
    int salary;
    int incentive;
    int target;
} SalesManager;

void storeStrct(SalesManager* h, int n){
    for (int i = 0; i < n; i++)
    {
        printf("Enter id\n");
        scanf("%d", &h[i].id);
        printf("Enter name\n");
        scanf("%s", h[i].name);
        printf("Enter salary\n");
        scanf("%d", &h[i].salary);
        printf("Enter Incentive\n");
        scanf("%d", &h[i].incentive);
        printf("Enter Target\n");
        scanf("%d", &h[i].target);
    }
}
void printStrct(SalesManager* h, int n){
    for (int i = 0; i < n; i++)
    {
        printf("\nid-> %d  Name-> %s  Salary->%d Incentive->%d Target->%d\n", h[i].id, h[i].name, h[i].salary, h[i].incentive, h[i].target);
    }
}

int main(){
    struct SalesManager smr[2];

    storeStrct(smr, 2);
    printStrct(smr, 2);
    return 0;
}