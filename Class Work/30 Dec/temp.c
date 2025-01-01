#include <stdio.h>

void pattern1()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j % 2)
                printf("%c", j + 64);
            else
                printf("%d", j);
        }
        printf("\n");
    }
}
void pattern2()
{
    /*
             2
           4 2 4
         6 4 2 4 6
       8 6 4 2 4 6 8
    10 8 6 4 2 4 6 8 10
    */
    int rows = 5, col = 9;
    for (int i = 1; i <= rows; i++)
    {
        int val = 2*i;
        // printing spaces
        for (int j = 0; j < rows - i; j++)
        {
            printf("    ");
        }

        // printf stars
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("%d   ", val);
            if(j<=(2*i-1)/2)
                val -= 2;
            else 
                val += 2;
            // printf("* ");
        }
        printf("\n");
    }
}

int main()
{
    pattern1();
    pattern2();
    return 0;
}