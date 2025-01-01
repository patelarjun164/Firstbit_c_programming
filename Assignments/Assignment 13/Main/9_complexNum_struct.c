#include<stdio.h>
#include<string.h>

struct Complex{
    int real;
    int img;
};

int main(){
    struct Complex c1,c2;
    printf("Enter Real Part\n");
    scanf("%d", &c1.real);
    printf("Enter Imaginary\n");
    scanf("%d", &c1.img);

    c2.real = 2;
    c2.img = 20;

    printf("\n%d + %di\n", c1.real, c1.img);
    printf("\n%d + %di\n\n", c2.real, c2.img);
    return 0;
}