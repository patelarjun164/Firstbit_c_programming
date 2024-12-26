#include<stdio.h>
void print1toN(int*);
int main(){
    int num;
    printf("Enter a Number\n");
    scanf("%d", &num);

    print1toN(&num);
    return 0;
}

void print1toN(int* n){
    for (int i = 1; i <= *n; i++)
    {
        printf("%d ", i);
    }
}