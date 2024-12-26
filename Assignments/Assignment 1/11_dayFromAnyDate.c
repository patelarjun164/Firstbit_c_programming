// problem: find day from any given date
// example: 26 jan 2020 ---> sunday

// pre-requisite
// chart 1 - (months code)
/*
jan   --> 1 (0 for leap year!!!)
fab   --> 4 (3 for leap year!!!)
march --> 4
april --> 0
may   --> 2
june  --> 5
july  --> 0
aug   --> 3
sep   --> 6
oct   --> 1
nov   --> 4
dec   --> 6
*/

//chart 2 - (day code)
/*
sun  --> 1
mon  --> 2
tue  --> 3
wed  --> 4
thrs --> 5
fri  --> 6
sat  --> 0 
*/


//chart 3 - remainder code
/*
100 --> 4
200 --> 2
300 --> 0
000 --> 6
*/

//calculation
//date is 20 jan 2020
/*
step 0: check if year is leap or not, and prepare chart 1 accordingly
step 1: take day num from date here 20(store in var1)
step 2: get months code from chart 1- here from jan, code is 0(store in var2)
step 3: seperate 2020 as yrtemp1 = 2000 and yrtemp2 = 20
step 4: cal (yrtemp1)2000/400 ==> 0, get code for 000 from chart 3(store result in var3)
step 5: get 20 from step 3(store value in var4 = yrtemp2)
step 6: (yrtemp2)20/4==> 5  (store result in var 5)
step 7: store totalVarValue = var1+var2+var3+var4+var5;
step 8: cal totalVarValue%7 ==> 1 (store in finalAnswer)
step 9: print finalAnswer according to chart 2
*/
#include<stdio.h>
int main(){

    //taking inputs
    int day, month, year;
    printf("Enter day number betweem 1 and 31:\n");
    scanf("%d", &day);
    if(day<1 || day >31){
        printf("Enter valid day number from 1 to 31 only!\n");
        printf("Re run the  code to continue!\n");
        return 0;
    }
    printf("Enter month:\n");
    printf("Enter 1 for January\n");
    printf("Enter 2 for Fabuary\n");
    printf("Enter 3 for March\n");
    printf("Enter 4 for April\n");
    printf("Enter 5 for May\n");
    printf("Enter 6 for June\n");
    printf("Enter 7 for July\n");
    printf("Enter 8 for August\n");
    printf("Enter 9 for September\n");
    printf("Enter 10 for October\n");
    printf("Enter 11 for November\n");
    printf("Enter 12 for December\n");
    scanf("%d", &month);
    //validation check for month
    if(month<1 || month >12){
        printf("Enter valid month from 1 to 12 only!\n");
        printf("Re run the  code to continue!\n");
        return 0;
    }

    printf("Enter year yyyy format (example: 2022)\n");
    scanf("%d", &year);
    //validation check for year
    if(year<1000 || year>9999){
        printf("Enter valid year in 4 digits only!\n");
        printf("Re run the  code to continue!\n");
        return 0;
    }

    //step 0
    //checking leap year and prepare chart 1 accordingly
    //checking leap year
    int isLeapYear, monthCode;
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        isLeapYear = 1;
    else 
        isLeapYear = 0;

    //assigning monthCode as per chart 1
    //for leap year
    if(isLeapYear && month == 1){
        monthCode = 0;
    } 
    else if(isLeapYear && month ==2){
        monthCode = 3;
    } 
    //onwards for non leap years
    else if(month == 1){
        monthCode = 1;
    }
    else if(month == 2){
        monthCode = 4;
    }
    else if(month == 3){
        monthCode = 4;
    }
    else if(month == 4){
        monthCode = 0;
    }
    else if(month == 5){
        monthCode = 2;
    }
    else if(month == 6){
        monthCode = 5;
    }
    else if(month == 7){
        monthCode = 0;
    }
    else if(month == 8){
        monthCode = 3;
    }
    else if(month == 9){
        monthCode = 6;
    }
    else if(month == 10){
        monthCode = 1;
    }
    else if(month == 11){
        monthCode = 4;
    }
    else if(month == 12){
        monthCode = 6;
    }

    //step 1
    int var1 = day;
    // printf("var1 = %d\n", var1);

    //step 3
    int var2 = monthCode;
    // printf("var2 = %d\n", var2);

    //step 3, 4
    //separating year as per step 3,4 and 5
    int yrtemp2 = year%100; //here 20
    // printf("yrtemp2 = %d\n", yrtemp2);
    int yrtemp1 = year - yrtemp2; // here 2000 - from logical calculation
    // printf("yrtemp1 = %d\n", yrtemp1);

    //preparing chart 2 accordingly
    int var3;
    if(yrtemp1%400 == 100){
        var3 = 4;
    }
    else if(yrtemp1%400 == 200){
        var3 = 2;
    }
    else if(yrtemp1%400 == 300){
        var3 = 0;
    }
    else if(yrtemp1%400 == 0){
        var3 = 6;
    }
    // printf("var3 = %d\n", var3);

    //step 5
    int var4 = yrtemp2;
    // printf("var4 = %d\n", var4);

    //step 6
    int var5 = yrtemp2/4;
    // printf("var5 = %d\n", var5);

    //step 7 -- calculating totalVarValue
    int totalVarValue = var1+var2+var3+var4+var5;
    // printf("toatalVarValue = %d\n", totalVarValue);

    //step 8 -- calculating finalAnswer
    int finalAnswer = totalVarValue%7;
    // printf("finalAnswer = %d\n", finalAnswer);
    
    //step 7 and 8 can be combined if needed for optimization

    //step 9
    //printing answer according to chart 2
    if(finalAnswer==1){
        printf("\nOn %d/%d/%d its SUNDAY!",day,month, year);
    }
    else if(finalAnswer==2){
        printf("\nOn %d/%d/%d its MONDAY!",day,month,year);
    } 
    else if(finalAnswer==3){
        printf("\nOn %d/%d/%d its TUESDAY!",day,month,year);
    } 
    else if(finalAnswer==4){
        printf("\nOn %d/%d/%d its WEDNESDAY!",day,month,year);
    } 
    else if(finalAnswer==5){
        printf("\nOn %d/%d/%d its THURSDAY!",day,month,year);
    } 
    else if(finalAnswer==6){
        printf("\nOn %d/%d/%d its FRIDAY!",day,month,year);
    } 
    else if(finalAnswer==0){
        printf("\nOn %d/%d/%d its SATURDAY!",day,month,year);
    } 

    printf("\n\n_/\\_  Thank You...! _/\\_\n\n");

    return 0;
}

