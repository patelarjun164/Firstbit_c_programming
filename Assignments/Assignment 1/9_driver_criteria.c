#include<stdio.h>
#include<conio.h>
//age must be greater than 40
//d exp > 10
//12th marks > 60
int main(){
    int age = 50;
    int exp = 12;
    int marks = 70;

    (age >40 && exp > 10 && marks > 60) ? printf("Driver is eligible") :printf("Driver is NOT eligible");
    return 0;
}