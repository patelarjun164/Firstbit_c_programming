#include<stdio.h>
#include<conio.h>
int main(){
    int noOfDay;

    printf("Enter 1 for Sunday\n");
    printf("Enter 2 for Monday\n");
    printf("Enter 3 for Tuesday\n");
    printf("Enter 4 for Wednesday\n");
    printf("Enter 5 for Thursday\n");
    printf("Enter 6 for Friday\n");
    printf("Enter 7 for Satuday\n");
    scanf("%d", &noOfDay);

    if(noOfDay==2 || noOfDay==3 || noOfDay==4 || noOfDay==5 || noOfDay==6){
        printf("It's weekday...!");
    }
    else if(noOfDay==1 || noOfDay==7){
        printf("Hurray, Its WeekEnd, Enjoy your day\n");
    } else printf("Invalid Choice...!\n");
    return 0;
}