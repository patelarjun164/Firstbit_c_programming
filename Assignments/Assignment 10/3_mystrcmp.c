#include<stdio.h>
#include<string.h>

int mystrcmp(char* str, char* str2){
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
    char str[50], str2[50];
    printf("Enter a string 1 upto 50 chars:\n");
    scanf("%s", str);
    printf("Enter a string 2 upto 50 chars:\n");
    scanf("%s", str2);

    // mystrcmp(str, str2);
    int res = mystrcmp(str, str2);
    if(res==0)
        printf("Both strings are same.\n");
    else if(res==1) printf("Str is greater than str2\n");
    else printf("Str2 is greater than str\n");
    return 0;
}