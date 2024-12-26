#include<stdio.h>
#include<conio.h>
//convert time entered in hh mm sec into sec
int main(){
    int hr, min, sec, totalSecs;
    printf("Enter hour\n");
    scanf("%d", &hr);
    printf("Enter Min\n");
    scanf("%d", &min);
    printf("Enter Sec\n");
    scanf("%d", &sec);

    totalSecs = (hr*3600) + (min*60) + sec;
    printf("%d:%d:%d  --> %d seconds", hr, min, sec, totalSecs);
    return 0;
}