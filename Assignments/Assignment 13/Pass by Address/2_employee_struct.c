#include<stdio.h>
#include<string.h>

typedef struct Employee{
    int id;
    char name[30];
    int salary;
} Employee;

void storeEmps(Employee* emp){
        printf("Enter id\n");
        scanf("%d", &emp->id);
        printf("Enter name\n");
        scanf("%s", emp->name);
        printf("Enter salary\n");
        scanf("%d", &emp->salary);
}
void printEmps(Employee* emp){
        printf("\nid-> %d  Name-> %s  Salary->%d\n", emp->id, emp->name, emp->salary);
}


int main(){
    Employee e1, e2, e3;
    storeEmps(&e1);
    storeEmps(&e2);
    storeEmps(&e3);
    printEmps(&e1);
    printEmps(&e2);
    printEmps(&e3);

    return 0;
}