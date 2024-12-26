#include<stdio.h>
int findAreaOfRect(int, int);
int findPerimeterOfRect(int, int);
float findAreaOfCircle(float);
float findPerimeterOfCircle(float);

int findAreaOfRect(int length, int breadth){
    return length*breadth;
}
int findPerimeterOfRect(int length, int breadth){
    return 2 * (length+breadth);
}

float findAreaOfCircle(float radius){
    return 3.14 * radius * radius;
}
float findPerimeterOfCircle(float radius){
    return 2 * 3.14 * radius;
}

int main(){
    int length, breadth;
    printf("Enter Length and breadth for finding Area of rectangle\n");
    scanf("%d %d", &length, &breadth);
    
    //function call
    printf("Area of rectangle is %d\n", findAreaOfRect(length, breadth));
    printf("perimeter of rectangle is %d\n", findPerimeterOfRect(length,breadth));

    float radius;
    printf("Enter radius value for finding Perimeter of circle\n");
    scanf("%f", &radius);

    //function call
    printf("Area of circle is %.2f\n", 3.14 * radius * radius);
    printf("perimeter of circle is %.2f\n", 2 * 3.14 * radius);
    return 0;
}