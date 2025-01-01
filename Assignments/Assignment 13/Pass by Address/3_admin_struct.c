#include<stdio.h>
#include<string.h>

typedef struct Admin{
    int id;
    char name[30];
    int salary;
    int allowance;
} Admin;

void storeStrct(Admin* admn){
        printf("Enter id\n");
        scanf("%d", &admn->id);
        printf("Enter name\n");
        scanf("%s", admn->name);
        printf("Enter salary\n");
        scanf("%d", &admn->salary);
        printf("Enter allowance\n");
        scanf("%d", &admn->allowance);
}
void printStrct(Admin* admn){
        printf("\nid-> %d  Name-> %s  Salary->%d Allowance->%d\n", admn->id, admn->name, admn->salary, admn->allowance);
}


int main(){
    struct Admin a1;
    storeStrct(&a1);
    printStrct(&a1);
    return 0;
}