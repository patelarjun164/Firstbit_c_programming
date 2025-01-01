#include<stdio.h>
#include<string.h>

typedef struct Employee{
    int id;
    char name[30];
    int salary;
} Employee;

void storeEmps(Employee* emp, int n){
    for (int i = 0; i < n; i++)
    {
        printf("Enter id\n");
        scanf("%d", &emp[i].id);
        printf("Enter name\n");
        scanf("%s", emp[i].name);
        printf("Enter salary\n");
        scanf("%d", &emp[i].salary);
    }
}
void printEmps(Employee* emp, int n){
    for (int i = 0; i < n; i++)
    {
        printf("\nid-> %d  Name-> %s  Salary->%d\n", emp[i].id, emp[i].name, emp[i].salary);
    }
}


int main(){
    Employee arr[3];
    storeEmps(arr, 3);
    printEmps(arr,3);

    return 0;
}