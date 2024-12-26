#include<stdio.h>
void ferenhitToCelcius();

int main(){
    printf("Start\n");
    ferenhitToCelcius();
    printf("End\n");
    return 0;
}

void ferenhitToCelcius(){
    float F;
    printf("Enter temperature Value in ferenhit\n");
    scanf("%f", &F);
    printf("%.2f ferenhit = %.2f celsius\n", F, ((F-32) * 5/9));
    // f-32 ** 5/9
}