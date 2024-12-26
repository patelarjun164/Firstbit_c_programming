#include <stdio.h>
void printTable(int*);

int main()
{
    int n, i = 1;
    printf("Enter Any Number u want to print table of\n");
    scanf("%d", &n);

    printTable(&n);
    return 0;
}

void printTable(int* n){
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", *n, i, *n * i);
    }
}