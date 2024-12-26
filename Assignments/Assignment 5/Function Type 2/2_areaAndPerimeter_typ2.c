#include<stdio.h>
int findAreaOfRect();
float findAreaOfCircle();

int findAreaOfRect(){
    int length;
    int breadth;

    printf("Enter Length and breadth for finding Area of rectangle\n");
    scanf("%d %d", &length, &breadth);
    return length*breadth;
    // printf("Area of rectangle is %d\n", length*breadth);
    // printf("perimeter of rectangle is %d\n", 2 * (length+breadth));

}
int findPerimeterOfRect(){
    int length;
    int breadth;

    printf("Enter Length and breadth for finding Perimeter of rectangle\n");
    scanf("%d %d", &length, &breadth);
    return 2 * (length+breadth);
    // printf("perimeter of rectangle is %d\n", 2 * (length+breadth));

}

float findAreaOfCircle(){
    float radius;
    printf("Enter radius value for finding Area of circle\n");
    scanf("%f", &radius);
    return 3.14 * radius * radius;
    // printf("Area of circle is %.2f\n", 3.14 * radius * radius);
}

float findPerimeterOfCircle(){
    float radius;
    printf("Enter radius value for finding Perimeter of circle\n");
    scanf("%f", &radius);
    return 2 * 3.14 * radius;
    // printf("perimeter of circle is %.2f\n", 2 * 3.14 * radius);
}

int main(){
    printf("Start\n");
    int areaRect = findAreaOfRect();
    printf("Area of rectangle is %d\n", areaRect);
    int periRect = findPerimeterOfRect();
    printf("Perimeter of rectangle is %d\n", periRect);
    float areaCircle = findAreaOfCircle();
    printf("Area of circle is %.2f\n", areaCircle);
    float periCircle = findPerimeterOfCircle();
    printf("Perimeter of circle is %0.2f\n", periCircle);
    printf("End\n");
    return 0;
}