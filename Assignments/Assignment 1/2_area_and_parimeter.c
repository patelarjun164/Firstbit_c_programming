#include<stdio.h>
#include<conio.h>
int main(){
    int length = 10;
    int breath = 10;
    printf("Area of rectangle is %d\n", length*breath);
    printf("perimeter of rectangle is %d\n", 2 * (length+breath));

    float radius = 5;
    printf("Area of circle is %.2f\n", 3.14 * radius * radius);
    printf("perimeter of circle is %.2f\n", 2 * 3.14 * radius);
    return 0;
}