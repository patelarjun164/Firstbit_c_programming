#include <stdio.h>
#include <string.h>

typedef struct Date
{
    int date;
    int month;
    int year;
} Date;

void storeStrct(Date *dt)
{
    printf("Enter date\n");
    scanf("%d", &dt->date);
    printf("Enter month\n");
    scanf("%d", &dt->month);
    printf("Enter year\n");
    scanf("%d", &dt->year);
}
void printStrct(Date *dt)
{
    printf("\n%d/%d/%d\n", dt->date, dt->month, dt->year);
}

int main()
{
    struct Date dt;
    storeStrct(&dt);
    printStrct(&dt);

    return 0;
}