#include<stdio.h>
//number can be called perfect if, sum of its divisors is same as number itself
//ex: 6 because 1 + 2 + 3 = 6
//28 beacuse, 1 +2 + 4 + 7 + 14 =28

int checkPerfectNum();

int main(){
    printf("Start\n");
    checkPerfectNum() ? printf("Num is a Perfect number\n"):printf("Num is NOT a Perfect number\n") ;
    printf("End\n");
    return 0;
}

int checkPerfectNum(){
    int num;
    printf("Enter a num:\n");
    scanf("%d", &num);

    int temp = num, sum =0;
    for (int i = 1; i <= temp/2; i++)
    {
        if(num%i==0) sum += i;
    }

    return temp==sum;
    // if(temp==sum) printf("%d is a Perfect number\n", num);
    // else printf("%s is not a Perfect num\n", num);
}