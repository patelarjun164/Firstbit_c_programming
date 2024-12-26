#include<stdio.h>
#include<string.h>

int cmpstr(char* str, char* str2){
    int len1 = strlen(str);
    int len2 = strlen(str2);
    if(len1>len2) return 1;
    else if(len2>len1) return -1; 
    else {
        for (int i = 0; i < len1;  i++)
        {
            if(str[i]>str2[i]) return 1;
            if(str2[i]>str[i]) return -1;
        }
        return 0;
    }
}

int main(){
    char str[30];
    printf("Enter String 1\n");
    scanf("%s", str);
    char str2[30];
    printf("Enter String 2\n");
    scanf("%s", str2);

    cmpstr(str, str2) ? printf("Str is larger\n"): printf("Str2 is larger\n");
    return 0;
}