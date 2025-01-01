#include<stdio.h>
#include<string.h>

typedef struct Date{
    int date;
    int month;
    int year;
} Date;

void storeStrct(Date* dt, int n){
    for (int i = 0; i < n; i++)
    {
        printf("Enter date\n");
        scanf("%d", &dt[i].date);
        printf("Enter month\n");
        scanf("%d", &dt[i].month);
        printf("Enter year\n");
        scanf("%d", &dt[i].year);
    }
}
void printStrct(Date* dt, int n){
    for (int i = 0; i < n; i++)
    {
        printf("\n%d/%d/%d\n", dt[i].date, dt[i].month, dt[i].year);
    }
}

int main(){
    struct Date dt[2];
    storeStrct(dt, 2);
    printStrct(dt, 2);

    return 0;
}