#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

// Structure Declaration Of Player
typedef struct Player
{
    char name[20];
    int jersey_number;
    int runs;
    int wickets;
    int matches_played;
} Player;

// Functions Declarations

void hardcodedRecors(Player *);
void display_all_players(Player *, int);
void addPlayer(Player *, int *, int);
void removePlayer(Player *, int *, int);
void updatePlayerdata(Player *, int, int);
void searchPlayer(Player *, int, int);
void sortPlayer(Player *, int);
void sortHightoLow(Player *, int, int);
void getMaxRunsPlayer(Player *, int);
void getMinRunsPlayer(Player *, int No_ofRecords);
void getMaxWicketPlayer(Player *, int);
void getMinWicketPlayer(Player *, int);

void main()
{
    int choice;            // For Menue Driven Code user choice
    int size = 50;         // Size of array (you can store this amount of records)
    int No_of_Records = 5; // Current Number of Record present in system
    Player parr[size];

    // Hardcoded Records Function calls
    hardcodedRecors(parr);

    // Displaying choices to user

    printf("\n|--------------------  Wellcome to Player Management System  --------------------|\n\n");
    // printf("-----------------------------------------------------------------------------------\n\n");
    printf("----------------------------------------------------------------------------------\n");
    printf("|   Operations\t\t\t\t|\tKey_Press_To_Perform_Operation   |\n");
    printf("----------------------------------------------------------------------------------\n");
    printf("| 1.Display All Player Information\t|\t\tPress-1 \t\t |\n");
    printf("| 2.Add New Player Information\t\t|\t\tPress-2 \t\t |\n");
    printf("| 3.Remove Player\t\t\t|\t\tPress-3 \t\t |\n");
    printf("| 4.Update Player Info\t\t\t|\t\tPress-4 \t\t |\n");
    printf("| 5.Search Player \t\t\t|\t\tPress-5 \t\t |\n");
    printf("| 6.Sort Player \t\t\t|\t\tPress-6 \t\t |\n");
    printf("| 7.Exit System\t\t\t\t|\t\tPress-0 \t\t |\n");
    printf("----------------------------------------------------------------------------------\n");
    printf("Enter Your Choice :");
    scanf("%d", &choice);

    while (choice != 0)
    {

        if (choice == 1)
        {
            display_all_players(parr, No_of_Records);
            // break;
        }
        else if (choice == 2)
        {
            addPlayer(parr, &No_of_Records, size);
            // break;
        }
        else if (choice == 3)
        {
            removePlayer(parr, &No_of_Records, size);
            // break;
        }
        else if (choice == 4)
        {
            updatePlayerdata(parr, No_of_Records, size);
            // break;
        }
        else if (choice == 5)
        {
            searchPlayer(parr, No_of_Records, size);
            // break;
        }
        else if (choice == 6)
        {
            sortPlayer(parr, No_of_Records);
            // break;
        }
        else
        {
            printf("Please Enter correct choice");
        }

        // printf("\n---------------------  Wellcome to Player Management System  ---------------------\n\n");
        //  printf("-----------------------------------------------------------------------------------\n\n");
        printf("\n\n----------------------------------------------------------------------------------\n");
        printf("|   Operations\t\t\t\t|\tKey_Press_To_Perform_Operation   |\n");
        printf("----------------------------------------------------------------------------------\n");
        printf("| 1.Display All Player Information\t|\t\tPress-1 \t\t |\n");
        printf("| 2.Add New Player Information\t\t|\t\tPress-2 \t\t |\n");
        printf("| 3.Remove Player\t\t\t|\t\tPress-3 \t\t |\n");
        printf("| 4.Update Player Info\t\t\t|\t\tPress-4 \t\t |\n");
        printf("| 5.Search Player \t\t\t|\t\tPress-5 \t\t |\n");
        printf("| 6.Sort Player \t\t\t|\t\tPress-6 \t\t |\n");
        printf("| 7.Exit System\t\t\t\t|\t\tPress-0 \t\t |\n");
        printf("----------------------------------------------------------------------------------\n");
        printf("Enter Your Choice :");
        scanf("%d", &choice);
    }
}

// Function Definations

void hardcodedRecors(Player *parr)
{
    // Player-1 Info
    strcpy(parr[0].name, "Virat Kohli");
    parr[0].jersey_number = 18;
    parr[0].runs = 20000;
    parr[0].wickets = 15;
    parr[0].matches_played = 214;

    // Player-2 Info
    strcpy(parr[1].name, "Rahul Dravid");
    parr[1].jersey_number = 50;
    parr[1].runs = 10000;
    parr[1].wickets = 20;
    parr[1].matches_played = 214;

    // Player-3 Info
    strcpy(parr[2].name, "Rohit Shrma");
    parr[2].jersey_number = 45;
    parr[2].runs = 14000;
    parr[2].wickets = 80;
    parr[2].matches_played = 214;

    // Player-4 Info
    strcpy(parr[3].name, "KL Rahul");
    parr[3].jersey_number = 5;
    parr[3].runs = 5000;
    parr[3].wickets = 10;
    parr[3].matches_played = 214;

    // Player-5 Info
    strcpy(parr[4].name, "Om xyz");
    parr[4].jersey_number = 19;
    parr[4].runs = 1906;
    parr[4].wickets = 30;
    parr[4].matches_played = 214;
}

void display_all_players(Player *temp, int No_of_Records)
{
    printf("\n\t\t\t    Players Information\n");
    printf("---------------------------------------------------------------------------------\n");
    printf("|   Player\t   Jersry_Number     Match_Played\tRuns\t      Wickets   |\n");
    printf("---------------------------------------------------------------------------------\n");
    for (int i = 0; i < No_of_Records; i++)
    {
        printf("| %s\t\t%d\t\t%d\t\t%d\t\t%d\t|\n", temp[i].name, temp[i].jersey_number, temp[i].matches_played, temp[i].runs, temp[i].wickets);
    }
}

void addPlayer(Player *temp, int *No_of_Records, int size)
{
    // int padd;
    // printf("Enter How many player you want add in sysytem :");
    // scanf("%d", &padd);
    // int flag = 1;
    int Flag = 1;
    int jFlag = 1;
    if (size == *No_of_Records)
        printf("You Cannot Add New Plyer Information Database is full");
    else
    {
        for (int i = *No_of_Records; i < *No_of_Records + 1; i++)
        {
            printf("\nEnter Player Jersey Number :");
            scanf("%d", &temp[i].jersey_number);

            for (int a = 0; a < *No_of_Records; a++)
            {
                if (temp[i].jersey_number == temp[a].jersey_number)
                {
                    jFlag = 0;
                    break;
                }
            }

            if (jFlag == 0)
                break;

            printf("Enter Player Name :");
            fflush(stdin);
            char tempname[20];
            fgets(tempname, 20, stdin);
            tempname[strlen(tempname) - 1] = '\0';
            strcpy(temp[i].name, tempname);

            int k = 0;
            while (tempname[k] != '\0')
            {
                if (tempname[k] == ' ')
                {
                    k++;
                    continue;
                }
                // Check if the character is not alphanumeric
                if (!isalnum(tempname[k]))
                {
                    Flag = 0;
                }
                k++;
            }

            if (Flag == 0)
                break;

            printf("Enter Player Total Runs :");
            scanf("%d", &temp[i].runs);
            printf("Enter Player Total Wickets :");
            scanf("%d", &temp[i].wickets);
            printf("Enter Total Matches played by player :");
            scanf("%d", &temp[i].matches_played);
        }
        if (Flag == 1 && jFlag == 1)
        {
            (*No_of_Records)++;
            printf("\n-------------------\n");
            printf("| Player is added |");
            printf("\n-------------------\n");
        }
    }

    if (Flag == 0)
    {
        printf("\n----------------------------------------------\n");
        printf("| Error -> Player Name has spacial character |");
        printf("\n----------------------------------------------\n");
    }

    if (jFlag == 0)
    {
        printf("\n---------------------------------------------------\n");
        printf("| Error -> Player Jersy Number has allready taken |");
        printf("\n---------------------------------------------------\n");
    }
}

void removePlayer(Player *temp, int *No_of_Records, int size)
{
    if (*No_of_Records == 0)
        printf("\nDatabase is empty you cannot remove player");
    else
    {
        int jseryno;
        printf("Enter Jersy Number of Player you want to Remove :");
        scanf("%d", &jseryno);
        int flag = 0;

        for (int i = 0; i < *No_of_Records; i++)
        {
            if (temp[i].jersey_number == jseryno)
            {
                for (int j = i; j < *No_of_Records; j++, i++)
                {
                    temp[i] = temp[i + 1];
                }
                (*No_of_Records)--;
                printf("\n----------------------------------------\n");
                printf("| Player Record is remove successfully |\n");
                printf("----------------------------------------");
                flag = 1;
                break;
            }
        }

        if (flag == 0)
        {
            printf("\n------------------------------------\n");
            printf("| Error -> Player Record not found |");
            printf("\n------------------------------------\n");
        }
    }
}

void updatePlayerdata(Player *temp, int No_of_Records, int size)
{
    int flag = 0;
    if (No_of_Records == 0)
        printf("\nDatabase is empty you cannot update player information");
    else
    {
        char pname[20];
        printf("Enter Name of Player you want to Update :");
        fflush(stdin);
        fgets(pname, 20, stdin);
        pname[strlen(pname) - 1] = '\0';

        int jno;
        printf("Enter Player Jersy Number :");
        scanf("%d", &jno);

        for (int i = 0; i < No_of_Records; i++)
        {
            if (strcasecmp(pname, temp[i].name) == 0 && jno == temp[i].jersey_number)
            {
                flag = 1;
                printf("\n----------------------------------------------------------\n");
                printf("|\t\tWHAT YOU WANT TO UPDATE\t\t\t |\n");
                printf("----------------------------------------------------------\n");
                printf("| 1.Update Player Runs\t\t\t|\tPress-1  |\n");
                printf("| 2.Update Player Wickets\t\t|\tPress-2  |\n");
                printf("| 3.Update Player Matches played\t|\tPress-2  |");
                printf("\n----------------------------------------------------------\n");
                printf("Enter your choice :");
                int c;
                scanf("%d", &c);
                if (c == 1)
                {
                    int newruns;
                    printf("Enter New Runs of player %s :", temp[i].name);
                    scanf("%d", &newruns);

                    temp[i].runs = newruns;
                    printf("\n-----------------------\n");
                    printf("| Player runs updated |");
                    printf("\n-----------------------\n");
                }
                else if (c == 2)
                {
                    int newwickets;
                    printf("Enter New Wikets of player %s :", temp[i].name);
                    scanf("%d", &newwickets);

                    temp[i].wickets = newwickets;
                    printf("\n--------------------------\n");
                    printf("| Player wickets updated |");
                    printf("\n--------------------------\n");
                }
                else if (c == 3)
                {
                    int newmatchesplayed;
                    printf("Enter New Number matches played of player %s :", temp[i].name);
                    scanf("%d", &newmatchesplayed);

                    temp[i].matches_played = newmatchesplayed;
                    printf("\n---------------------------------\n");
                    printf("| Player matches played updated |");
                    printf("\n---------------------------------\n");
                }
                else
                {
                    printf("\n---------------------------------\n");
                    printf("| Error -> Enter correct choice |");
                    printf("\n---------------------------------\n");
                }
            }
        }
        if (flag == 0)
        {
            printf("\n------------------------------------\n");
            printf("| Error -> Player Record Not found |");
            printf("\n------------------------------------\n");
        }
    }
}

void searchPlayer(Player *temp, int No_of_Records, int size)
{
    int flag = 0;
    if (No_of_Records == 0)
        printf("\nDatabase is empty you cannot Search player information");
    else
    {
        printf("\n---------------------------------------------------\n");
        printf("|\tHow you want to search a player\t\t  |");
        printf("\n---------------------------------------------------\n");
        printf("| 1. Search by Player Name\t\t| press-1 |\n");
        printf("| 2. Search by Player Jersy Number\t| press-2 |");
        printf("\n---------------------------------------------------\n");
        printf("Enter your choice :");
        int c;
        scanf("%d", &c);

        if (c == 1)
        {
            char pname[20];
            printf("\nEnter Name of Player you want to Search :");
            fflush(stdin);
            fgets(pname, 20, stdin);
            pname[strlen(pname) - 1] = '\0';

            for (int i = 0; i < No_of_Records; i++)
            {
                if (strstr(temp[i].name, pname) != NULL)
                {
                    flag = 1;
                    printf("\n-----------------\n");
                    printf("| Player Found |");
                    printf("\n-----------------\n");

                    display_all_players(&temp[i], 1);
                }
            }
            if (flag == 0)
            {
                printf("\n-----------------------------------\n");
                printf("| Player %s Not found", pname);
                printf("\n-----------------------------------\n");
            }
        }
        else if (c == 2)
        {
            int jno;
            printf("Enter Player Jersy Number :");
            scanf("%d", &jno);

            for (int i = 0; i < No_of_Records; i++)
            {
                if (jno == temp[i].jersey_number)
                {
                    flag = 1;
                    printf("\n---------------------------------\n");
                    printf("| Player %s Found", temp[i].name);
                    printf("\n---------------------------------\n");

                    display_all_players(&temp[i], 1);
                }
            }
            if (flag == 0)
            {
                printf("\n-----------------------------\n");
                printf("| Error -> Player Not found |");
                printf("\n-----------------------------\n");
            }
        }
        else
        {
            printf("\n---------------------------------\n");
            printf("| Error -> Enter correct choice |");
            printf("\n---------------------------------\n");
        }
    }
}

void sortPlayer(Player *temp, int No_of_Records)
{
    int choice;
    printf("\n-------------------------------------------------------\n");
    printf("| \t\t  Sorting Base on\t\t      |");
    printf("\n-------------------------------------------------------\n");
    printf("| 1.Top Three Highest Runs scorer Player\t|    Press-1  |\n");
    printf("| 2.Top Three Lowest Runs scorer Player\t|    Press-2  |\n");
    printf("| 3.Top Three Highest Wicket taker Player\t|    Press-3  |\n");
    printf("| 4.Top Three Lowest Wicket taker Player\t|    Press-4  |\n");
    printf("| 5.High to Low Runs Player\t|    Press-5  |");
    printf("\n-------------------------------------------------------\n");
    printf("Enter your choice : ");
    scanf("%d", &choice);

    if (choice == 1)
        // getMaxRunsPlayer(temp, No_of_Records);
        sortHightoLow(temp, No_of_Records, choice);
    else if (choice == 2)
        // getMinRunsPlayer(temp, No_of_Records);
        sortHightoLow(temp, No_of_Records, choice);
    else if (choice == 3)
        getMaxWicketPlayer(temp, No_of_Records);
    else if (choice == 4)
        getMinWicketPlayer(temp, No_of_Records);
    else
    {
        printf("\n----------------------------------------\n");
        printf("| Error -> Please Enter correct choice |");
        printf("\n----------------------------------------\n");
    }
}

void sortHightoLow(Player *temp, int No_of_Records, int choice)
{
    Player sortedarr[No_of_Records];
    for (int i = 0; i < No_of_Records; i++)
    {
        sortedarr[i] = temp[i];
    }

    for (int j = 0; j < No_of_Records; j++)
    {
        for (int i = 0; i < No_of_Records - 1; i++)
        {
            if ((choice==1) ? sortedarr[i + 1].runs > sortedarr[i].runs : sortedarr[i + 1].runs < sortedarr[i].runs)
            {
                Player temp = sortedarr[i];
                sortedarr[i] = sortedarr[i + 1];
                sortedarr[i + 1] = temp;
            }
        }
    }

    if (choice == 1)
    {
        if (No_of_Records == 0)
            printf("\nDatabase is empty you cannot Search player information");
        else
        {
            // Player *address = sortHightoLow(temp, No_of_Records);
            display_all_players(sortedarr, 3);
        }
    }
    else if (choice == 2)
    {
        if (No_of_Records == 0)
            printf("\nDatabase is empty you cannot Search player information");
        else
        {
            // Player *address = sortHightoLow(temp, No_of_Records);
            display_all_players(sortedarr, 3);
        }
    }
}

void getMaxWicketPlayer(Player *temp, int No_of_Records)
{
    if (No_of_Records == 0)
        printf("\nDatabase is empty you cannot Search player information");
    else
    {
        Player sortedarr[No_of_Records];
        for (int i = 0; i < No_of_Records; i++)
        {
            sortedarr[i] = temp[i];
        }

        for (int j = 0; j < No_of_Records; j++)
        {
            for (int i = 0; i < No_of_Records - 1; i++)
            {
                if (sortedarr[i + 1].wickets > sortedarr[i].wickets)
                {
                    Player temp = sortedarr[i];
                    sortedarr[i] = sortedarr[i + 1];
                    sortedarr[i + 1] = temp;
                }
            }
        }

        display_all_players(sortedarr, 3);
    }
}

void getMinWicketPlayer(Player *temp, int No_of_Records)
{
    if (No_of_Records == 0)
        printf("\nDatabase is empty you cannot Search player information");
    else
    {
        Player sortedarr[No_of_Records];
        for (int i = 0; i < No_of_Records; i++)
        {
            sortedarr[i] = temp[i];
        }

        for (int j = 0; j < No_of_Records; j++)
        {
            for (int i = 0; i < No_of_Records - 1; i++)
            {
                if (sortedarr[i + 1].wickets < sortedarr[i].wickets)
                {
                    Player temp = sortedarr[i];
                    sortedarr[i] = sortedarr[i + 1];
                    sortedarr[i + 1] = temp;
                }
            }
        }

        display_all_players(sortedarr, 3);
    }
}