#include<stdio.h>
float ferenhitToCelcius();

int main(){
    printf("Start\n");
    float res = ferenhitToCelcius();
    printf("%.2f celsius\n", res);
    printf("End\n");
    return 0;
}

float ferenhitToCelcius(){
    float F;
    printf("Enter temperature Value in ferenhit\n");
    scanf("%f", &F);
    return ((F-32) * 5/9);
    // f-32 ** 5/9
}