#include<stdio.h>
/*

--------#########---------

NO Change in code at all compare to type 1 function, as there nothing to return and no parameter, we are printing only.

--------#########------------


*/
void print1To10();

int main(){
    printf("Start\n");
    print1To10();
    printf("End\n");
    return 0;
}

void print1To10(){
    // int i=1;
    // while(i<11){
    //     printf("%d\n", i);
    //     i++;
    // }
    
    for (int i = 1; i < 11; i++)
    {
        printf("%d\n", i);
    }
}