#include <stdio.h>
#include <string.h>

/*
Movie Database: Create a program that uses structures to manage a movie database with details like title, director, release year, and genre. Allow users to add, search for, and update movie records.
*/

typedef struct Movie
{
    int id;
    char title[30];
    char director[30];
    int releaseYear;
    char genre[30];
} Movie;

void hardCoded(Movie *mrr)
{
    mrr[0].id = 1;
    strcpy(mrr[0].title, "Animal");
    strcpy(mrr[0].director, "Arjun Reddy Vanga");
    mrr[0].releaseYear = 2024;
    strcpy(mrr[0].genre, "Action Crime");

    mrr[1].id = 2;
    strcpy(mrr[1].title, "3 Idiots");
    strcpy(mrr[1].director, "Vidhu Vinod Chopra");
    mrr[1].releaseYear = 2014;
    strcpy(mrr[1].genre, "Drama");

    mrr[2].id = 3;
    strcpy(mrr[2].title, "Stree");
    strcpy(mrr[2].director, "Maddock Production");
    mrr[2].releaseYear = 2023;
    strcpy(mrr[2].genre, "Horror Comedy");
}

void displayMovies(Movie *mrr, int *index)
{
    printf("-------------------------------------------------------------------------------------------\n");
    printf("| %-3s | %-20s | %-20s | %-12s | %-20s |\n", "Id", "Title", "Director", "Release Year", "Genre");
    printf("-------------------------------------------------------------------------------------------\n");
    for (int i = 0; i < *index; i++)
    {
        printf("| %-3d | %-20s | %-20s | %-12d | %-20s |\n", mrr[i].id, mrr[i].title, mrr[i].director, mrr[i].releaseYear, mrr[i].genre);
        printf("-------------------------------------------------------------------------------------------\n");
    }
}

int addMovie(Movie *mrr, int *index)
{
    static int staticId = 4;
    mrr[*index].id = staticId;
    printf("Assigned id --> %d\n", staticId);
    printf("Enter Movie Title\n");
    fflush(stdin);
    fgets(mrr[*index].title, sizeof(mrr[*index].title), stdin);
    // Optional: Remove newline character
    mrr[*index].title[strcspn(mrr[*index].title, "\n")] = '\0';

    printf("Enter the name of director\n");
    fgets(mrr[*index].director, sizeof(mrr[*index].director), stdin);
    // Optional: Remove newline character
    mrr[*index].director[strcspn(mrr[*index].director, "\n")] = '\0';

    fflush(stdin);
    printf("Enter release year of movie\n");
    scanf("%d", &mrr[*index].releaseYear);
    fflush(stdin);

    printf("Enter the genre of movie\n");
    fgets(mrr[*index].genre, sizeof(mrr[*index].genre), stdin);
    // Optional: Remove newline character
    mrr[*index].genre[strcspn(mrr[*index].genre, "\n")] = '\0';

    staticId++;
    return mrr[*index].id;
}

int searchById(Movie *mrr, int *index, int tempId)
{
    for (int i = 0; i < *index; i++)
    {
        if (mrr[i].id = tempId)
            return i;
    }
}

void searchByName(Movie *mrr, int *index)
{
    char str[30];
    Movie tempArr[10];
    int j = 0;
    fflush(stdin);
    printf("Enter name of Movie you want to search/update\n");
    fgets(str, sizeof(str), stdin);
    fflush(stdin);
    // Optional: Remove newline character
    str[strcspn(str, "\n")] = '\0';

    for (int i = 0; i < *index; i++)
    {
        if (strstr(strlwr(mrr[i].title), strlwr(str)))
        {
            tempArr[j] = mrr[i];
            j++;
        }
    }

    if (j)
        displayMovies(tempArr, &j);
    else
        printf("No result found!\n");
}

void updateMovie(Movie *mrr, int *index)
{
    int tempId;
    searchByName(mrr, index);
    printf("Enter id of movie u want to update\n");
    scanf("%d", &tempId);

    int res = searchById(mrr, index, tempId);
    char tempName[30];
    int choice;
    printf("1. Update movie title\n");
    printf("2. Update movie director\n");
    printf("3. Update movie release year\n");
    printf("4. Update movie genre\n");
    scanf("%d", &choice);
    fflush(stdin);
    switch (choice)
    {
    case 1:
        printf("Enter Movie Title\n");
        fflush(stdin);
        fgets(tempName, sizeof(tempName), stdin);
        // Optional: Remove newline character
        tempName[strcspn(tempName, "\n")] = '\0';
        strcpy(mrr[res].title, tempName);
        break;

    case 2:
        printf("Enter new director name\n");
        fflush(stdin);
        fgets(tempName, sizeof(tempName), stdin);
        // Optional: Remove newline character
        tempName[strcspn(tempName, "\n")] = '\0';
        strcpy(mrr[res].director, tempName);
        break;

    case 3:
        int tempYr;
        printf("Enter new release year\n");
        scanf("%d", &tempYr);
        mrr[res].releaseYear = tempYr;
        break;

    case 4:
        printf("Enter new genre\n");
        fflush(stdin);
        fgets(tempName, sizeof(tempName), stdin);
        // Optional: Remove newline character
        tempName[strcspn(tempName, "\n")] = '\0';
        strcpy(mrr[res].genre, tempName);
        break;

    default:
        printf("Invalid Choice\n");
        break;
    }
}

int main()
{
    int mIndex = 3, choice;
    Movie mrr[5];
    hardCoded(mrr);

    while (1)
    {
        printf("1. Add Movie\n");
        printf("2. Display All Movies\n");
        printf("3. Search Movie by Name\n");
        printf("4. Update Movie\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            int res = addMovie(mrr, &mIndex);
            if (res)
            {
                printf("Movie added successfully with id -> %d\n", res);
                mIndex++;
            }
            else
                printf("Error in adding book\n");
            break;
        }
        case 2:
        {
            displayMovies(mrr, &mIndex);
            break;
        }
        case 3:
        {
            searchByName(mrr, &mIndex);
            break;
        }
        case 4:
        {
            updateMovie(mrr, &mIndex);
            break;
        }

        default:
            break;
        }
    }

    return 0;
}