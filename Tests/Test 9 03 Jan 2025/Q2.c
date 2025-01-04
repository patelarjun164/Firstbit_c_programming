#include<stdio.h>

typedef struct People{
    int age;
    double ticketAmount;
    double discount;
} People;

int main(){
    People p[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the age of person %d --> ", i+1);
        scanf("%d", &p[i].age);
        printf("Enter ticket amount of person %d --> ", i+1);
        scanf("%lf", &p[i].ticketAmount);

        if(p[i].age<12) p[i].discount = 30;
        else if(p[i].age>59) p[i].discount = 50;
        else p[i].discount = 0;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Person %d needs to pay %.2lf rs\n", i+1, p[i].ticketAmount - (p[i].ticketAmount * p[i].discount)/100);
    }
    
    return 0;
}