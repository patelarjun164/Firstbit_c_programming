#include<stdio.h>
#include<string.h>

char* revStr(char* str){
    int len = strlen(str);
    for (int i = 0; i <= len/2; i++)
    {
        char temp = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = temp;
    }
    return str;
}

int main(){
    char str[20];
    printf("Enter String\n");
    scanf("%s", str);

    printf("Reversed String --> %s", revStr(str));
    return 0;
}