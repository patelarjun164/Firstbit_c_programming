#include <stdio.h>
int main()
{
    int num, i = 1;
    printf("Enter a number upto which u want to print odd num:\n");
    scanf("%d", &num);

    printf("Odd num from 1 to %d are: ", num);
    while (i<=num)
    {
        if (i % 2==0)
        {
            printf("%d ", i);
        }
        i++;
    }

    return 0;
}