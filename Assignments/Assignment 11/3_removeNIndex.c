#include<stdio.h>
#include<string.h>

char* removeNthChar(char* str, int n){
    int length = strlen(str), i;
    for (i = 0; i < length-1; i++)
    {
        if(i>=n) str[i]=str[i+1];
    }
    str[i]='\0';
    return str;
}

int main(){
    char str[30];
    printf("Enter string\n");
    scanf("%s", str);

    int n;
    printf("Enter n\n");
    scanf("%d",&n);

    printf("%s",removeNthChar(str, n-1));
    return 0;
}