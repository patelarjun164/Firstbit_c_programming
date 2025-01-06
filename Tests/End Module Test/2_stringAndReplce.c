#include<stdio.h>
#include<string.h>
int main(){
    char str[50], ch, sc;
    printf("Enter string\n");
    gets(str);

    printf("Enter char you want to replace\n");
    scanf("%c", &ch);

    fflush(stdin);
    printf("Enter char you with which you to replace\n");
    scanf("%c", &sc);

    int len = strlen(str);
    printf("---Before---\n%s\n\n", str);
    fflush(stdin);
    for (int i = 0; i < len; i++)
    {
        if(str[i]==ch){
            str[i] = sc;
        }
    }
    
    printf("---After---\n%s\n\n", str);
    return 0;
}