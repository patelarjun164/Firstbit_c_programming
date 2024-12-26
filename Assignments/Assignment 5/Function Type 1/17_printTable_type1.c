#include <stdio.h>

void printTable();

int main()
{
    printf("Start\n");
    printTable();
    printf("End\n");
    return 0;
}

void printTable() {
    int n, i = 1;
    printf("Enter Any Number u want to print table of\n");
    scanf("%d", &n);

    // while (i < 11)
    // {
    //     printf("%d x %d = %d\n", n, i, n * i);
    //     i++;
    // }
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}