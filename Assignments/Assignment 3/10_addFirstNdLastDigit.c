#include<stdio.h>
#include<math.h>
//add first and and last digit of given num
int main(){
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);

    int temp = num, lastDigit, firstDigit, lengthOfNum=0;
    lastDigit = temp%10;

    //logic 1 for find 1st digit of num
    // while(temp>0){
    //     lengthOfNum++;
    //     temp /= 10;
    // }
    // //reassign temp to num
    // temp = num;
    // firstDigit = temp / pow(10,lengthOfNum-1);

    //logic 2 for find 1st digit of num
    while (temp>0)
    {
        // if(temp/10==0){
        //     firstDigit =temp;
        //     break;
        // }
        firstDigit = temp%10;
        temp /= 10;
    }
    

    printf("Sum of first digit(%d) + last Digit(%d) = %d", firstDigit, lastDigit, firstDigit+lastDigit);
    return 0;
}