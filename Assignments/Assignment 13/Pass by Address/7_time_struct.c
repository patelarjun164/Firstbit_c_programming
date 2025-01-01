#include<stdio.h>
#include<string.h>

typedef struct Time{
    int hr;
    int min;
    int sec;
} Time;

void storeStrct(Time* dt){
        printf("Enter Hour\n");
        scanf("%d", &dt->hr);
        printf("Enter Minutes\n");
        scanf("%d", &dt->min);
        printf("Enter Seconds\n");
        scanf("%d", &dt->sec);
}
void printStrct(Time* dt){
        printf("\nHr-> %d Minutes->%d Sec->%d\n", dt->hr, dt->min, dt->sec);
}

int main(){
    struct Time t;
    storeStrct(&t);
    printStrct(&t);

    return 0;
}