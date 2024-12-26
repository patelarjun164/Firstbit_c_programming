#include<stdio.h>
#include<conio.h>
//age must be greater than 40
//d exp > 10
//12th marks > 60

int checkDriverEligibility();

int main(){
    
    printf("Start\n");
    checkDriverEligibility() ? printf("Driver is Eligible\n") : printf("Driver is Not Eligible\n");
    printf("End\n");
    return 0;
}

int checkDriverEligibility(){
    int age,exp,marks;
    printf("Enter Age: ");
    scanf("%d", &age);
    printf("Enter Exp: ");
    scanf("%d", &exp);
    printf("Enter Marks: ");
    scanf("%d", &marks);

    // (age >40 && exp > 10 && marks > 60) ? printf("Driver is eligible") :printf("Driver is NOT eligible");
    if(age >40 && exp > 10 && marks > 60){
        return 1;
    }
    return 0;
}