#include<stdio.h>
//number can be called perfect if, sum of its divisors is same as number itself
//ex: 6 because 1 + 2 + 3 = 6
//28 beacuse, 1 +2 + 4 + 7 + 14 =28
int main(){
    int num;
    printf("Enter a num:\n");
    scanf("%d", &num);

    int temp = num, sum =0;
    // int temp = num, sum =0, divisor=1;
    // while(divisor<=temp/2){
    //     if(temp % divisor == 0){
    //         sum += divisor;
    //     }
    //     divisor++;
    // }
    for (int i = 1; i < temp; i++)
    {
        if(num%i==0) sum += i;
    }

    if(temp==sum) printf("%d is a Perfect number\n", num);
    else printf("%s is not a Perfect num\n", num);
    return 0;
}