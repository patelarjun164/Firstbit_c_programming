#include<stdio.h>
int main(){
    int num, i=1, sum=0;
    printf("Enter a number upto which u want sum of squere of natural num:\n");
    scanf("%d", &num);
    int temp = num;

    printf("Squeres of natural nums upto %d are: ", num);
    while(i<=temp){
        printf("%d ", i*i);
        sum += i * i;
        i++;
    }
    printf("\n");
    printf("Sum of squeres of digit is %d\n", sum);

    return 0;
}