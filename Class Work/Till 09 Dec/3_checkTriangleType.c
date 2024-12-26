#include<stdio.h>
#include<conio.h>
int main(){
    int len1, len2, len3;
    printf("Enter the lengths of all three sides og triangle\n");
    scanf("%d %d %d", &len1, &len2, &len3);

    if(len1==len2 && len2==len3){
        printf("It is equilateral triangle\n");
    }
    else if((len1==len2 && len2 != len3) || (len1==len3 && len3 != len2) || (len2==len3 && len2 != len1)){
        printf("It is isoceles triangle\n");
    }
    else printf("It is Scalen triangle\n");
    return 0;
}