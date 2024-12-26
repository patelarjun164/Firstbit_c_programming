#include<stdio.h>
void findAreaNPerimeterOfRect(int, int);
void findAreaNPerimeterOfCircle(float);

void findAreaNPerimeterOfRect(int length, int breadth){
    printf("Area of rectangle is %d\n", length*breadth);
    printf("perimeter of rectangle is %d\n", 2 * (length+breadth));
    // return length*breadth;
}

void findAreaNPerimeterOfCircle(float radius){
    // return 2 * 3.14 * radius;
    printf("Area of circle is %.2f\n", 3.14 * radius * radius);
    printf("perimeter of circle is %.2f\n", 2 * 3.14 * radius);
}

int main(){
    int length, breadth;
    printf("Enter Length and breadth for finding Area of rectangle\n");
    scanf("%d %d", &length, &breadth);
    findAreaNPerimeterOfRect(length, breadth);
    float radius;
    printf("Enter radius value for finding Perimeter of circle\n");
    scanf("%f", &radius);
    findAreaNPerimeterOfCircle(radius);
    return 0;
}