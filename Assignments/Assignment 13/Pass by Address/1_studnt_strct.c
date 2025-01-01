#include<stdio.h>
#include<string.h>

typedef struct Student{
    int rollNo;
    char name[30];
    int marks[3]; ///marks of two subjects
} Student;

void storeStudent(Student* s1){
    printf("Enter roll no\n");
    scanf("%d", &s1->rollNo);
    printf("Enter name no\n");
    scanf("%s", &s1->name);

    for (int i = 0; i < 3; i++)
    {
        printf("Enter marks for %d\n", i+1);
        scanf("%d", &s1->marks[i]);
    }
}

int main(){
    Student s1, s2;
    storeStudent(&s1);
    storeStudent(&s2);

    printf("\nRollNo-> %d  Name-> %s  Marks1->%d  Marks2->%d\n", s1.rollNo, s1.name, s1.marks[0], s1.marks[1]);
    printf("\nRollNo-> %d  Name-> %s  Marks1->%d  Marks2->%d\n", s2.rollNo, s2.name, s2.marks[0], s2.marks[1]);
    return 0;
}