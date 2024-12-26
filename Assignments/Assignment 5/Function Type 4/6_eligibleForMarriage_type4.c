#include <stdio.h>

int checkEligibility(int, char);

int main()
{
    int age;
    char gender;
    printf("Enter Age:\n");
    scanf("%d", &age);
    printf("Enter Gender('M'or 'F'):\n");
    fflush(stdin);
    scanf("%c", &gender);
    checkEligibility(age, gender) ? printf("Eligible For Marriage\n") : printf("Not Eligible For Marriage\n");
    // checkEligibility(age, gender);
    return 0;
}

int checkEligibility(int age,char gender)
{
    
    if (gender == 'M' || gender=='m')
    {
        // age>=21 ? printf("Gender -> %c\nAge -> %d\nEligible for marriage", gender, age): printf("Gender -> %c\nAge -> %d\nNot Eligible for marriage", gender, age);
        // age>=21 ? return 1 : return 0;
        if (age >= 21) return 1;
    }
    else if(gender == 'F' || gender=='f')
    {
        // age>=18 ? return 1: return 0;
        // age>=18 ? printf("Gender -> %c\nAge -> %d\nEligible for marriage", gender, age): printf("Gender -> %c\nAge -> %d\n Not Eligible for marriage", gender, age);
        if (age >= 18) return 1;
    }
    else printf("Invalid Input!!\n");
    return 0;
}