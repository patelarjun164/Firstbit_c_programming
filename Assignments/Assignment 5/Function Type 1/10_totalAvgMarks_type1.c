#include<stdio.h>

void calAvg();

int main(){
    printf("Start\n");
    calAvg();
    printf("End\n");
    return 0;
}

void calAvg(){
    int s1 = 60;
    int s2 = 65;
    int s3 = 70;
    int s4 = 75;
    int s5 = 80;

    //cal total
    printf("Total marks is %d out of 500\n", s1+s2+s3+s4+s5);
    printf("Avg marks is %d", (s1+s2+s3+s4+s5)/5);
}