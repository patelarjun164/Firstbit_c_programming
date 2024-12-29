#include<stdio.h>
#include<string.h>

struct Distance{
    float feet;
    float inch;
};

int main(){
    struct Distance t1,t2;
    printf("Enter Feet\n");
    scanf("%f", &t1.feet);
    printf("Enter Inch\n");
    scanf("%f", &t1.inch);

    t2.feet = 2;
    t2.inch = 20;

    printf("\n%.2f feets, %.2f  inchs", t1.feet, t1.inch);
    printf("\n%.2f feets, %.2f  inchs", t1.feet, t2.inch);
    return 0;
}