#include<stdio.h>
#include<conio.h>
// if basic <= 5000 da,ta, hra -> 10%,20,30
// otherwise 15,25,30
int main(){
    float basic = 4500;
    float salary;
    if(basic <=5000){
        salary = basic + (basic * 10)/100 + (basic * 20)/100 + (basic*30)/100;
    }
    else 
        salary = basic + (basic * 15)/100 + (basic * 25)/100 + (basic*30)/100;

    printf("Salary is %.2f\n", salary);
    return 0;
}