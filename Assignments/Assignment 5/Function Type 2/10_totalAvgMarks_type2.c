#include<stdio.h>

int calAvg();

int main(){
    printf("Start\n");
    int res = calAvg();
    printf("Average of 5 subjects mark is %d\n", res);
    printf("End\n");
    return 0;
}

int calAvg(){
    int s1,s2,s3,s4,s5;
    printf("Enter 5 subjects marks\n");
    scanf("%d %d %d %d %d", &s1, &s2, &s3, &s4, &s5);

    //cal total
    // printf("Total marks is %d out of 500\n", s1+s2+s3+s4+s5);
    // printf("Avg marks is %d\n", (s1+s2+s3+s4+s5)/5);
    int avg = (s1+s2+s3+s4+s5)/5;
    //ASK to sir, why return (s1+s2+s3+s4+s5)/5 gives wrong value
    return avg;
}