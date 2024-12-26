#include <stdio.h>
#include <string.h>
int checkSpeChar(char *str)
{
    int spCharcount =0;;
    for (int i = 0; i < strlen(str); i++)
    {
        if ((str[i] >= 33 && str[i] <= 46))
            return 0;
    }
    return 1;
}

int checkPassword(char *str)
{
    if (strlen(str) < 10) return 1;
    if (checkSpeChar(str)) return 2;
    if(oneUpper(str)) return 3;
    return 0;
}

int oneUpper(char* str){
    for (int i = 0; i < strlen(str); i++)
    {
        if(str[i]>='A' && str[i]<='Z'){
            return 0;
        }
    }
    return 1;
}

int main()
{
    char str[50];
    printf("Enter Password\n");
    scanf("%s", str);

    int res = checkPassword(str);
    if(res==1){
        printf("Length is too short!!!");
    }
    else if(res==2){
        printf("Length is too short!!!");
    }
    if(res==1){
        printf("Length is too short!!!");
    }
    printf("%d", checkPassword(str));
    return 0;
}