#include <stdio.h>
#include <string.h>

/*
Write a program to create an array for 10 players. For each player store name, no. of matches played, runs, wickets takes.
a. Create function to Accept the information of each player.
b. Create function to display the information of all the players
c. Display the information of player who made maximum runs and the one who took maximum number of wickets.
*/

typedef struct Players
{
    char name[30];
    int noOfMatches;
    int runs;
    int wickets;
} Players;

void fgetsInput(char *str, size_t size)
{
    fflush(stdin);
    if (fgets(str, size, stdin))
    {
        // Remove newline character from fgets
        int len = strlen(str);
        if (len > 0 && str[len - 1] == '\n')
        {
            str[len - 1] = '\0';
        }
    }
}

void displayAll(Players *p, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Name -> %s | ", p[i].name);
        printf("Matchs Played -> %d | ", p[i].noOfMatches);
        printf("Runs -> %d | ", p[i].runs);
        printf("Wickets -> %d\n", p[i].wickets);
    }
}
void displayByIndex(Players *p, int i)
{
    printf("Name -> %s | ", p[i].name);
    printf("Matchs Played -> %d | ", p[i].noOfMatches);
    printf("Runs -> %d | ", p[i].runs);
    printf("Wickets -> %d\n", p[i].wickets);
}

void storeStruct(Players *p, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("---Players %d---\n", i + 1);
        printf("Enter name of the Players\n");
        fgetsInput(p[i].name, sizeof(p[i].name));
        printf("Enter No of matching played\n");
        scanf("%d", &p[i].noOfMatches);
        printf("Enter runs score by player\n");
        scanf("%d", &p[i].runs);
        printf("Enter wickets taken by player\n");
        scanf("%d", &p[i].wickets);
    }
}

void displayTableToppers(Players *p, int n)
{
    int maxRuns = p[0].runs, maxWicket = p[0].wickets;
    int maxRunsIndex = 0, maxWicketIndex = 0;
    for (int i = 0; i < n; i++)
    {
        if (p[i].runs > maxRuns)
        {
            maxRuns = p[i].runs;
            maxRunsIndex = i;
        }
        if (p[i].wickets > maxWicket)
        {
            maxRuns = p[i].wickets;
            maxWicketIndex = i;
        }
    }

    printf("Player who score maximum runs\n");
    displayByIndex(p, maxRunsIndex);
    printf("Player who taken maximum wickets\n");
    displayByIndex(p, maxWicketIndex);
}

int main()
{
    Players p[3];
    storeStruct(p, 3);

    displayAll(p, 3);
    displayTableToppers(p, 3);

    return 0;
}