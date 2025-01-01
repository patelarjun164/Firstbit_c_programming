#include<stdio.h>
#include<string.h>

typedef struct Complex{
    int real;
    int img;
} Complex;

void storeStrct(Complex* cmp){
        printf("Enter real num\n");
        scanf("%d", &cmp->real);
        printf("Enter imaginary num\n");
        scanf("%d", &cmp->img);
    
}
void printStrct(Complex* cmp){
        printf("\n%d + %di\n", cmp->real, cmp->img);
}

int main(){
    struct Complex cmp;

    storeStrct(&cmp);
    printStrct(&cmp);

    return 0;
}