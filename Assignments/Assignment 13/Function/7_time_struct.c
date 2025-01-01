#include<stdio.h>
#include<string.h>

typedef struct Time{
    int hr;
    int min;
    int sec;
} Time;

void storeStrct(Time* dt, int n){
    for (int i = 0; i < n; i++)
    {
        printf("Enter Hour\n");
        scanf("%d", &dt[i].hr);
        printf("Enter Minutes\n");
        scanf("%d", &dt[i].min);
        printf("Enter Seconds\n");
        scanf("%d", &dt[i].sec);
    }
}
void printStrct(Time* dt, int n){
    for (int i = 0; i < n; i++)
    {
        printf("\nHr-> %d Minutes->%d Sec->%d\n", dt[i].hr, dt[i].min, dt[i].sec);
    }
}

int main(){
    struct Time t[2];
    t[1].hr = 2;
    t[1].min = 20;
    t[1].sec = 23;
    storeStrct(t, 1);
    printStrct(t, 2);

    return 0;
}