#include<stdio.h>
void findAreaOfRect();
void findAreaOfCircle();

void findAreaOfRect(){
    int length;
    int breadth;

    printf("Enter Length and breadth\n");
    scanf("%d %d", &length, &breadth);
    printf("Area of rectangle is %d\n", length*breadth);
    printf("perimeter of rectangle is %d\n", 2 * (length+breadth));

}

void findAreaOfCircle(){
    float radius;
    printf("Enter radius value: ");
    scanf("%f", &radius);
    printf("Area of circle is %.2f\n", 3.14 * radius * radius);
    printf("perimeter of circle is %.2f\n", 2 * 3.14 * radius);
}

int main(){
    printf("Start\n");
    findAreaOfRect();
    findAreaOfCircle();
    printf("End\n");
    return 0;
}