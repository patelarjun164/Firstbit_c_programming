#include <stdio.h>
int tables[5] = {0};

int storeTableNo()
{
    int tb;
    printf("Assign Table No\n");
    scanf("%d", &tb);
    while(tables[tb] != 1){
        
    }
    return tb;
}

int checkTableAvailaibity(int tableNo)
{
    if (tables[tableNo] == 1)
    {
        printf("Table Not available...!!!\n");
    }
    else
    {
    }
}

int main()
{
    int tableNo;

    checkTableAvailaibity(tableNo);
    return 0;
}