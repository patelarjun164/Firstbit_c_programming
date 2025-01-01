#include<stdio.h>
#include<string.h>

typedef struct Distance{
    float feet;
    float inch;
} Distance;

void storeStrct(Distance* dt, int n){
    for (int i = 0; i < n; i++)
    {
        printf("Enter Feet\n");
        scanf("%f", &dt[i].feet);
        printf("Enter Inch\n");
        scanf("%f", &dt[i].inch);
    }
}
void printStrct(Distance* dt, int n){
    for (int i = 0; i < n; i++)
    {
        printf("\nLength is -> %.2f feets %.2f  inchs\n", dt[i].feet, dt[i].inch);
        printf("OR\n");
        printf("Length is -> %.2f' %.2f''", dt[i].feet, dt[i].inch);
    }
}

int main(){
    Distance t[2];
    t[1].feet = 2;
    t[1].inch = 20;

    storeStrct(t, 1);
    printStrct(t, 2);
    return 0;
}