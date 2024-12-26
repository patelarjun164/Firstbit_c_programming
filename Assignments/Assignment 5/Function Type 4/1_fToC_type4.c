#include<stdio.h>
float ferenhitToCelcius(float);

int main(){
    float F;
    printf("Enter temperature Value in ferenhit\n");
    scanf("%f", &F);
    printf("%0.2f Ferenhit = %.2f degree celsius\n",F, ferenhitToCelcius(F));
    return 0;
}

float ferenhitToCelcius(float F){
    return ((F-32) * 5/9);
    // f-32 ** 5/9
}