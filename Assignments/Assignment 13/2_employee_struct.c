#include<stdio.h>
#include<string.h>

struct Employee{
    int id;
    char name[30];
    int salary;
};

int main(){
    struct Employee e1, e2;
    e1.id = 1;
    printf("Enter name\n");
    scanf("%s", e1.name);
    printf("Enter salary\n");
    scanf("%d", &e1.salary);

    e2.id = 2;
    strcpy(e2.name, "Ronaldo");
    e2.salary = 900000;

    printf("\nid-> %d  Name-> %s  Salary->%d\n", e1.id, e1.name, e1.salary);
    printf("\nid-> %d  Name-> %s  Salary->%d\n", e2.id, e2.name, e2.salary);
    return 0;
}