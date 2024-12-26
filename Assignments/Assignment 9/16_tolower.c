#include<stdio.h>
#include<ctype.h>
#include<string.h>
 
int main(){
    char str[] = "ARJUN Patel";
    int n = strlen(str);
    // printf("%d \n", n);
    printf("%d \n", strlen(str));

    char str2[strlen(str)+1];
    // printf("%d \n", strlen(str2));
    // printf("%c", toupper(c));
    for (int i = 0; i < strlen(str); i++)
    {
        str2[i] = tolower(str[i]);
    }
    str2[strlen(str)] = '\0';
    printf("%s", str2);
    return 0;

}