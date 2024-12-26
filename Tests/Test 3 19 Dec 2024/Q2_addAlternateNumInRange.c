#include<stdio.h>
int main(){
    int start, end;
    printf("Enter Start value\n");
    scanf("%d", &start);
    printf("Enter End value\n");
    scanf("%d", &end);

    int sum = 0;
    for (int i = start; i <= end; i = i+2)
    {
        sum += i;
    }
    printf("Sum is %d\n", sum);
    return 0;
}