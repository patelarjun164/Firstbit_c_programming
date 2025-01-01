#include <stdio.h>
#include <string.h>

typedef struct Distance
{
    float feet;
    float inch;
} Distance;

void storeStrct(Distance *dt)
{
    printf("Enter Feet\n");
    scanf("%f", &dt->feet);
    printf("Enter Inch\n");
    scanf("%f", &dt->inch);
}
void printStrct(Distance *dt)
{
    printf("\nLength is -> %.2f feets %.2f  inchs\n", dt->feet, dt->inch);
    printf("OR\n");
    printf("Length is -> %.2f' %.2f''", dt->feet, dt->inch);
}

int main()
{
    Distance t;

    storeStrct(&t);
    printStrct(&t);
    return 0;
}