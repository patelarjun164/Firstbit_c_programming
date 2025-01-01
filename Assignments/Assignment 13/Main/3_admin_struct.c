#include<stdio.h>
#include<string.h>

struct Admin{
    int id;
    char name[30];
    int salary;
    int allowance;
};

int main(){
    struct Admin a1, a2;
    a1.id = 1;
    printf("Enter name\n");
    scanf("%s", a1.name);
    printf("Enter salary\n");
    scanf("%d", &a1.salary);
    printf("Enter allowance\n");
    scanf("%d", &a1.allowance);

    a2.id = 2;
    strcpy(a2.name, "Ravi");
    a2.salary = 16000;
    a2.allowance = 6500;

    printf("\nid-> %d  Name-> %s  Salary->%d  Allowance->%d\n", a1.id, a1.name, a1.salary, a1.allowance);
    printf("\nid-> %d  Name-> %s  Salary->%d  Allowance->%d\n", a2.id, a2.name, a2.salary, a2.allowance);
    return 0;
}