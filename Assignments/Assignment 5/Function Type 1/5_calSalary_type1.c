#include<stdio.h>
// if basic <= 5000 da,ta, hra -> 10%,20,30
// otherwise 15,25,30
void calSalary();
int main(){
    printf("Start\n");
    calSalary();
    printf("End\n");
    return 0;
}

void calSalary(){
    float basic;
    printf("Enter Basic of Salary\n");
    scanf("%f", &basic);
    float salary;
    if(basic <=5000){
        salary = basic + (basic * 10)/100 + (basic * 20)/100 + (basic*30)/100;
    }
    else 
        salary = basic + (basic * 15)/100 + (basic * 25)/100 + (basic*30)/100;

    printf("Salary is %.2f\n", salary);
}