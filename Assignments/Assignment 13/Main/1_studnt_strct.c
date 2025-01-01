#include<stdio.h>
#include<string.h>

struct Student{
    int rollNo;
    char name[30];
    int marks5[2]; ///marks of two subjects
};

int main(){
    struct Student s1, s2, s3;
    s1.rollNo = 1;
    printf("Enter name\n");
    scanf("%s", s1.name);
    for (int i = 0; i < 2; i++)
    {
        printf("Enter marks for %d\n", i+1);
        scanf("%d", &s1.marks5[i]);
    }

    s2.rollNo = 2;
    strcpy(s2.name, "Mike");
    s2.marks5[0] = 60;
    s2.marks5[1] = 90;

    s3.rollNo = 3;
    strcpy(s3.name, "Messi");
    s3.marks5[0] = 70;
    s3.marks5[1] = 95;

    printf("\nRollNo-> %d  Name-> %s  Marks1->%d  Marks2->%d\n", s1.rollNo, s1.name, s1.marks5[0], s1.marks5[1]);
    printf("\nRollNo-> %d  Name-> %s  Marks1->%d  Marks2->%d\n", s2.rollNo, s2.name, s2.marks5[0], s2.marks5[1]);
    printf("\nRollNo-> %d  Name-> %s  Marks1->%d  Marks2->%d\n", s3.rollNo, s3.name, s3.marks5[0], s3.marks5[1]);
    return 0;
}