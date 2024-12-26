#include<stdio.h>
#include<string.h>

int mystrncmp(char* str1, char* str2, int n){
    for (int i = 0; i < n; i++)
    {
        if(str1[i]>str2[i]) return 1;
        if(str2[i]>str1[i]) return -1;
    }
    return 0;
}

int main(){
    char str[50];
    printf("Enter String 1\n");
    scanf("%s", str);

    char str2[50];
    printf("Enter String 2\n");
    scanf("%s", str2);

    int n;
    printf("Upto How many char u want to check\n");
    scanf("%d", &n);

    printf("%d \n", mystrncmp(str, str2, n));
    return 0;
}