#include<stdio.h>
#include<string.h>

struct Date{
    int date;
    int month;
    int year;
};

int main(){
    struct Date d1,d2;
    printf("Enter Date\n");
    scanf("%d", &d1.date);
    printf("Enter Month\n");
    scanf("%d", &d1.month);
    printf("Enter Year\n");
    scanf("%d", &d1.year);

    d2.date = 2;
    d2.month = 12;
    d2.year = 2024;

    printf("\nDate-> %d  Month-> %d  Year->%d\n", d1.date, d1.month, d1.year);
    printf("\nDate-> %d  Month-> %d  Year->%d\n", d2.date, d2.month, d2.year);
    return 0;
}