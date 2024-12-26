#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* checkPalindrome(char *str){
    int length = strlen(str), i;
    char* dup = (char*)malloc(length* sizeof(char));
    for ( i = 0; i < length; i++)
    {
        dup[i] = str[length-i-1];
    }
    dup[i] = '\0';
    return dup;
}

int main(){
    char str[30];
    printf("Enter String 1\n");
    scanf("%s", str);

    char* dup = checkPalindrome(str);
    
    !strcmp(str, dup) ? printf("Palindrome\n") : printf("Not Palindrome\n");
    free(dup);
    return 0;
}