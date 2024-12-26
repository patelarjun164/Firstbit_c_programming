#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    printf("Enter String value\n");
    scanf("%s", str);
    int len = strlen(str), vowel=0, consonant=0;
    for (int i = 0; i < len; i++)
    {
        if(str[i]=='A' || str[i]=='a' || str[i]=='e' || str[i]=='E' || str[i]=='i' || str[i]=='I' || str[i]=='o' || str[i]=='O' || str[i]=='u' || str[i]=='U'){
            vowel++;
        }
        else if(((int)str[i]>=65 && (int)str[i]<=90) || ((int)str[i]>=97 && (int)str[i]<=122)){
            consonant++;
        }
    }
    

    printf("Vowel --> %d \nConsonant --> %d", vowel, consonant);
    return 0;
}