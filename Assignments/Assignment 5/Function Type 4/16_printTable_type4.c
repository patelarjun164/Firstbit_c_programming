#include <stdio.h>

int printTable(int, int);
//Here if we want to return only multiplication, then stack will open and close for 10 times, which takes more time to process

int main()
{
    printf("Start\n");
    
    int n;
    printf("Enter Any Number u want to print table of\n");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, printTable(n, i));
    }
    printf("End\n");
    return 0;
}

int printTable(int n, int i) {
    return n*i;
}