#include<stdio.h>
#include<conio.h>
int main(){
    int nOfPassenger = 5, perTickCost, discount;
    
    printf("Enter per ticket cost\n");
    scanf("%d", &perTickCost);

    int age1,age2,age3,age4,age5;
    printf("Enter the age of each passanger\n");
    scanf("%d %d %d %d %d", &age1, &age2, &age3, &age4, &age5);

    int psg1, psg2, psg3, psg4, psg5;
    
    if(age1<12) psg1 = perTickCost - (perTickCost * 30)/100;
    else if(age1>59) psg1 = perTickCost - (perTickCost * 50)/100;
    else psg1 = perTickCost;
    
    if(age1<12) psg2 = perTickCost - (perTickCost * 30)/100;
    else if(age1>59) psg2 = perTickCost - (perTickCost * 50)/100;
    else psg2 = perTickCost;
    
    if(age1<12) psg3 = perTickCost - (perTickCost * 30)/100;
    else if(age1>59) psg3 = perTickCost - (perTickCost * 50)/100;
    else psg3 = perTickCost;
    
    if(age1<12) psg4 = perTickCost - (perTickCost * 30)/100;
    else if(age1>59) psg4 = perTickCost - (perTickCost * 50)/100;
    else psg4 = perTickCost;
    
    if(age1<12) psg5 = perTickCost - (perTickCost * 30)/100;
    else if(age1>59) psg5 = perTickCost - (perTickCost * 50)/100;
    else psg5 = perTickCost;

    int totalTicketAmount = psg1 + psg2+ psg3+psg4+psg5;
    printf("Total amount is: %d rs", totalTicketAmount);
    return 0;
}