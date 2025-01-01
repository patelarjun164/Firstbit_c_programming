#include<stdio.h>
#include<string.h>

struct HR{
    int id;
    char name[30];
    int salary;
    int commision;
};

int main(){
    struct HR h1, h2;
    h1.id = 1;
    printf("Enter name\n");
    scanf("%s", h1.name);
    printf("Enter salary\n");
    scanf("%d", &h1.salary);
    printf("Enter Commision\n");
    scanf("%d", &h1.commision);

    h2.id = 2;
    strcpy(h2.name, "Jainish");
    h2.salary = 30000;
    h2.commision = 4000;

    printf("\nid-> %d  Name-> %s  Salary->%d  Commision->%d\n", h1.id, h1.name, h1.salary, h1.commision);
    printf("\nid-> %d  Name-> %s  Salary->%d  Commision->%d\n\n", h2.id, h2.name, h2.salary, h2.commision);
    return 0;
}