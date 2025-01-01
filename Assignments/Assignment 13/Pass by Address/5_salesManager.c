#include<stdio.h>
#include<string.h>

typedef struct SalesManager{
    int id;
    char name[30];
    int salary;
    int incentive;
    int target;
} SalesManager;

void storeStrct(SalesManager* sm){
        printf("Enter id\n");
        scanf("%d", &sm->id);
        printf("Enter name\n");
        scanf("%s", sm->name);
        printf("Enter salary\n");
        scanf("%d", &sm->salary);
        printf("Enter Incentive\n");
        scanf("%d", &sm->incentive);
        printf("Enter Target\n");
        scanf("%d", &sm->target);
}
void printStrct(SalesManager* sm){
        printf("\nid-> %d  Name-> %s  Salary->%d Incentive->%d Target->%d\n", sm->id, sm->name, sm->salary, sm->incentive, sm->target);
}

int main(){
    struct SalesManager smr;

    storeStrct(&smr);
    printStrct(&smr);
    return 0;
}