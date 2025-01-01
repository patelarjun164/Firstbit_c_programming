#include<stdio.h>
#include<string.h>

typedef struct HR{
    int id;
    char name[30];
    int salary;
    int commision;
} HR;

void storeStrct(HR* h){
        printf("Enter id\n");
        scanf("%d", &h->id);
        printf("Enter name\n");
        scanf("%s", h->name);
        printf("Enter salary\n");
        scanf("%d", &h->salary);
        printf("Enter Commision\n");
        scanf("%d", &h->commision);
}
void printStrct(HR* h){
        printf("\nid-> %d  Name-> %s  Salary->%d Commision->%d\n", h->id, h->name, h->salary, h->commision);
}


int main(){
    struct HR h;
    storeStrct(&h);
    printStrct(&h);
    return 0;
}