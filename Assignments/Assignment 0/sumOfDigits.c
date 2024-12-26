#include<stdio.h>
int main(){
    int num = 6781;
    int q = num %10;
    num = num /10;
    int r = num % 10;
    num  = num /10;
    int p = num %10;
    int s = num/ 10;
    printf("Sum of digits is %d", p+q+r+s);
    
    return 0;
}