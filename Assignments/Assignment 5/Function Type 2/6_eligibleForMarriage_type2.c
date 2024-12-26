#include <stdio.h>

int checkEligibility();

int main()
{
    printf("Start\n");
    checkEligibility() ? printf("Eligible For Marriage\n") : printf("Not Eligible For Marriage\n");
    printf("End\n");
    return 0;
}

int checkEligibility()
{
    int age;
    char gender;
    printf("Enter Age and Gender('M'or 'F'):\n");
    scanf("%d %c", &age, &gender);
    if (gender == 'M')
    {
        // age>=21 ? printf("Gender -> %c\nAge -> %d\nEligible for marriage", gender, age): printf("Gender -> %c\nAge -> %d\nNot Eligible for marriage", gender, age);
        // age>=21 ? return 1 : return 0;
        if (age >= 21) return 1;
    }
    else
    {
        if (age >= 18) return 1;
        // age>=18 ? return 1: return 0;
        // age>=18 ? printf("Gender -> %c\nAge -> %d\nEligible for marriage", gender, age): printf("Gender -> %c\nAge -> %d\n Not Eligible for marriage", gender, age);
    }
    return 0;
}