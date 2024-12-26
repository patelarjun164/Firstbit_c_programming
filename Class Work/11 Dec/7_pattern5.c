/*
A B C D E
A B C D
A B C
A B
A
*/
#include <stdio.h>
int main()
{
    int rows = 5;
    char c = 'A';
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows - i+1; j++)
        {
            printf("%c ", c+j-1);
        }
        printf("\n");
    }

    return 0;
}