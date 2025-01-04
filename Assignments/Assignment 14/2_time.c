#include<stdio.h>

typedef struct Time{
    int hr;
    int min;
    char sec;
} Time;

void displayAll(Time* t,int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d : %d : %d\n", t[i].hr, t[i].min, t[i].sec);
    } 
}

int convertIntoSecs(Time t){
    int total = (t.hr*3600) + (t.min*60) + (t.sec);
    return total;
}

void add(Time t1, Time t2){
    int totalSecs = convertIntoSecs(t1) + convertIntoSecs(t2);
    int totalHrs =  totalSecs/3600;
    int hrRem = totalSecs%3600;
    int totalMin =  hrRem/60;
    int minRem = hrRem%60;
    int totalSec =  minRem%60;

    printf("%d : %d : %d\n", totalHrs, totalMin, totalSec);
}

int main(){
    Time t[2];
    for (int i = 0; i < 2; i++)
    {
        printf("---Time %d---\n", i+1);
        printf("Enter hrs\n");
        scanf("%d", &t[i].hr);
        printf("Enter minutes\n");
        scanf("%d", &t[i].min);
        printf("Enter secs\n");
        scanf("%d", &t[i].sec);
    }

    displayAll(t, 2);

    printf("Addition of two time\n");
    add(t[0], t[1]);
    
    return 0;
}