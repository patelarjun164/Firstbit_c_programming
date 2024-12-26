#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "nayan";
    char str2[strlen(str)+1];
    strcpy(str2, str);
    
    printf("%d\n",strcmp(str2, str));
    
    strcmp(str2, str) ? printf("Not Palindorme"): printf("Palindorme");
    return 0;
}