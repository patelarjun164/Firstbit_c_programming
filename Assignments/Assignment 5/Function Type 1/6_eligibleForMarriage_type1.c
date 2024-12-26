#include<stdio.h>

void checkEligibility();

int main(){
    
    printf("Start\n");
    checkEligibility();
    printf("End\n");
    return 0;
}

void checkEligibility(){
    int age;
    char gender;
    printf("Enter Age and Gender('M'or 'F'):\n");
    scanf("%d %c", &age, &gender);
    if(gender == 'M') {
        age>=21 ? printf("Gender -> %c\nAge -> %d\nEligible for marriage", gender, age): printf("Gender -> %c\nAge -> %d\nNot Eligible for marriage", gender, age);
    } else {
        age>=18 ? printf("Gender -> %c\nAge -> %d\nEligible for marriage", gender, age): printf("Gender -> %c\nAge -> %d\n Not Eligible for marriage", gender, age);
    }
}