#include<stdio.h>
#include<string.h>

typedef struct Complex{
    int real;
    int img;
} Complex;

void storeStrct(Complex* cmp, int n){
    for (int i = 0; i < n; i++)
    {
        printf("Enter real num\n");
        scanf("%d", &cmp[i].real);
        printf("Enter imaginary num\n");
        scanf("%d", &cmp[i].img);
    }
}
void printStrct(Complex* cmp, int n){
    for (int i = 0; i < n; i++)
    {
        printf("\n%d + %di\n", cmp[i].real, cmp[i].img);
    }
}

int main(){
    struct Complex cmp[2];
    cmp[1].real = 2;
    cmp[1].img = 20;

    storeStrct(cmp, 1);
    printStrct(cmp, 2);

    return 0;
}