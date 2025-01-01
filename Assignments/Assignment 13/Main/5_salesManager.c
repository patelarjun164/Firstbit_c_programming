#include<stdio.h>
#include<string.h>

struct SalesManager{
    int id;
    char name[30];
    int salary;
    int incentive;
    int target;
};

int main(){
    struct SalesManager s1, s2;
    s1.id = 1;
    printf("Enter Name for s1\n");
    scanf("%s", s1.name);
    printf("Enter Salary for s1\n");
    scanf("%d", &s1.salary);
    printf("Enter incentive for s1\n");
    scanf("%d", &s1.incentive);
    printf("Enter incentive for s1\n");
    scanf("%d", &s1.target);

    s2.id = 2;
    strcpy(s2.name, "Jainish");
    s2.salary = 30000;
    s2.incentive = 4000;
    s2.target = 250;

    printf("\nid-> %d  Name-> %s  Salary->%d  Incentive->%d\n Target->%d\n", s1.id, s1.name, s1.salary, s1.incentive, s1.target);
    printf("\nid-> %d  Name-> %s  Salary->%d  Incentive->%d\n Target->%d\n\n", s2.id, s2.name, s2.salary, s2.incentive, s2.target);
    return 0;
}