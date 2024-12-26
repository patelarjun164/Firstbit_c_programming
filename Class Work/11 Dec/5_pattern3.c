/*
1 2 3 4 5 
1 2 3 4 
1 2 3 
1 2 
1 
*/
#include<stdio.h>
int main(){
    int rows = 5;
    for (int i = rows; i > 0 ; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    for (int i = 1 ; i <= rows ; i++)
    {
        for (int j = 1; j <= rows-i+1; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    
    return 0;
}