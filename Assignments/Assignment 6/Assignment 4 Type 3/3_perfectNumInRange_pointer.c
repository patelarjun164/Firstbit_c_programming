#include <stdio.h>
// number can be called perfect if, sum of its divisors is same as number itself
// ex: 6 because 1 + 2 + 3 = 6
// 28 beacuse, 1 +2 + 4 + 7 + 14 =28

void checkPerfect(int* num)
{
    for (int j = 1; j <= *num; j++)
    {
        int sum = 0;
        for (int i = 1; i <= j / 2; i++)
        {
            if (j % i == 0)
                sum += i;
        }

        if (j == sum)
        {
            printf("%d ", j);
        }
    }
}

int main()
{
    int num;
    printf("Upto which range u want to check perfect num: ");
    scanf("%d", &num);

    checkPerfect(&num);

    return 0;
}