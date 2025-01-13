#include<stdio.h>
int main(){
    int n;
    printf("Enter how many terms u want?\n");
    scanf("%d", &n);

    long long int num = 3, sum=0;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", num);
        sum += num;
        num = (num*10) + 3;
        i<n-1 && printf("+ "); 
    }
    printf(" = %d\n", sum);
    return 0;
}