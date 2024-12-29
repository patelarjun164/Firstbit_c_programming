#include<stdio.h>
#include<string.h>

struct Time{
    int hr;
    int min;
    int sec;
};

int main(){
    struct Time t1,t2;
    printf("Enter Hour\n");
    scanf("%d", &t1.hr);
    printf("Enter Minutes\n");
    scanf("%d", &t1.min);
    printf("Enter Seconds\n");
    scanf("%d", &t1.sec);

    t2.hr = 2;
    t2.min = 20;
    t2.sec = 23;

    printf("\nHr-> %d  Minutes-> %d  Seconds->%d\n", t1.hr, t1.min, t1.sec);
    printf("Hour-> %d  Minutes-> %d  Seconds->%d\n", t2.hr, t2.min, t2.sec);
    return 0;
}