#include<stdio.h>

void mystrupr(char* str){
    while(*str != '\0'){
        if(*str >= 'a' && *str <= 'z') *str -= 32;
        str++;
    }
}

int main(){
    char str[50];
    printf("Enter a string 1 upto 50 chars:\n");
    scanf("%s", str);

    mystrupr(str);
    printf("%s", str);
    return 0;
}