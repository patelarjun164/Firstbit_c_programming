#include<stdio.h>
void ferenhitToCelcius(float);

int main(){
    float F;
    printf("Enter temperature Value in ferenhit\n");
    scanf("%f", &F);
    ferenhitToCelcius(F);
    return 0;
}

void ferenhitToCelcius(float F){
    // return ((F-32) * 5/9);
    printf("%0.2f Ferenhit = %.2f degree celsius\n",F, ((F-32) * 5/9));
    // f-32 ** 5/9
}