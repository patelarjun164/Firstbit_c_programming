#include<stdio.h>
#include<conio.h>
int main(){
    int age = 22;
    char gender = 'M';
    if(gender == 'M') {
        age>=21 ? printf("Gender -> %c\nAge -> %d\nEligible for marriage", gender, age): printf("Gender -> %c\nAge -> %d\nNot Eligible for marriage", gender, age);
    } else {
        age>=18 ? printf("Gender -> %c\nAge -> %d\nEligible for marriage", gender, age): printf("Gender -> %c\nAge -> %d\n Not Eligible for marriage", gender, age);
    }
    
    return 0;
}