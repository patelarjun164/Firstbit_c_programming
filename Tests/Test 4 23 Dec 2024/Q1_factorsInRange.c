#include<stdio.h>

void printFactor(int start, int end){
    for (int i = start; i <= end; i++)
    {
        int num = i;
        printf("%d = ", num);
        for (int j = 1; j <=num/2; j++)
        {
            if(num % j==0) printf("%d, ", j);
        }
        printf("%d \n", num);
    } 
}

int main(){
    int start, end;
    printf("Enter Start Value\n");
    scanf("%d", &start);
    printf("Enter Start Value\n");
    scanf("%d", &end);

    printFactor(start, end);
    return 0;
}