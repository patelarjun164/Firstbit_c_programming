#include<stdio.h>

char* mystrcpy(char* str, char* str2){
    char* temp = str2;
    while(*str != '\0'){
        *temp = *str;
        str++;
        temp++; 
    }
    *temp = '\0';
    return str2;
}

int main(){
    char str[50];
    printf("Enter string\n");
    scanf("%s", str);
    char str2[50];
    printf("%s \n", str);
    printf(" str 2 --> %s \n", mystrcpy(str, str2));
    printf("%s", str2);
    return 0;
}