#include<stdio.h>
int main(){
    int num, temp, sum =0;
    printf("Enter a number:\n");
    scanf("%d", &num);
    temp = num;

    printf("Even nums in given number are: ");
    while(temp>0){
        int rem = temp%10;
        if (rem%2==1)
        {
            printf("%d ", rem);
            sum += rem;
        }
        temp /= 10;
    }
    printf("\n");
    printf("Sum of even numbers in %d is %d", num, sum);
    return 0;
}