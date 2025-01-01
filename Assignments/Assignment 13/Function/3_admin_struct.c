#include<stdio.h>
#include<string.h>

typedef struct Admin{
    int id;
    char name[30];
    int salary;
    int allowance;
} Admin;

void storeStrct(Admin* emp, int n){
    for (int i = 0; i < n; i++)
    {
        printf("Enter id\n");
        scanf("%d", &emp[i].id);
        printf("Enter name\n");
        scanf("%s", emp[i].name);
        printf("Enter salary\n");
        scanf("%d", &emp[i].salary);
        printf("Enter allowance\n");
        scanf("%d", &emp[i].allowance);
    }
}
void printStrct(Admin* emp, int n){
    for (int i = 0; i < n; i++)
    {
        printf("\nid-> %d  Name-> %s  Salary->%d Allowance->%d\n", emp[i].id, emp[i].name, emp[i].salary, emp[i].allowance);
    }
}


int main(){
    struct Admin arr[2];
    storeStrct(arr, 2);
    printStrct(arr, 2);
    return 0;
}