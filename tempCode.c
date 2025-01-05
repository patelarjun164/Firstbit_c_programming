#include <stdio.h>
#include <string.h>

typedef struct Book
{
    int bookid;
    char bookname[50];
    char authorname[50];
    char category[50];
    float price;
    float rating;

} Book;
void Storebook(Book *, int);
void display(Book *, int);
int Addbook(Book *, int);
int Searchbook(Book *, int);
int Updatebook(Book *, int);
int showAuthorBook(Book *, int);
void showCategory(Book *, int);
void displayTop3(Book *, int);
int RemoveBook(Book *, int);

int main()
{
    Book arr[50];
    int bookindex = 5;
    Storebook(arr, bookindex);
    int choice; // choice variable to  select which function to call by selecting choice
    while (1)
    {

        printf("\n----------Welcome To THE BOOK MANAGNMENT SYSTEM----------\n");
        printf("\n-----MENU -----\n");

        printf("\n 1. Add Book \n");
        printf("\n 2. Search Book \n");
        printf("\n 3. Update Book \n");
        printf("\n 4. Display All Books \n");
        printf("\n 5. Show Author Books \n");
        printf("\n 6. Show Category Books \n");
        printf("\n 7. Display Top3 Books\n");
        printf("\n 8. REMOVE Book \n");
        printf("\n 9. Exit \n");
        printf("\n PLEASE ENTER THE CHOICE \n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            Addbook(arr, bookindex); // call addbook function

            break;
        case 2:
            Searchbook(arr, bookindex); // call searchbook function
            break;
        case 3:
            Updatebook(arr, bookindex); // call updatebook function
            break;
        case 4:
            display(arr, bookindex); // call display function
            break;
        case 5:
            showAuthorBook(arr, bookindex); // call showauthorbook function
            break;
        case 6:
            showCategory(arr, bookindex); // call showcategory function
            break;

        case 7:
            printf("\nYou selected to display the Top 3 Books.\n"); // FIXED: Added confirmation message
            if (bookindex < 3)
            {
                printf("Less than 3 books are available. Displaying all available books:\n"); // FIXED: Check if bookindex < 3
            }
            displayTop3(arr, bookindex);             // FIXED: Ensure this function doesn't inadvertently exit
            printf("Returning to the main menu.\n"); // FIXED: Explicit confirmation message
            break;
        case 8:
            bookindex = RemoveBook(arr, bookindex);
            // if (bookindex > 0)
            // {
            //   printf("\nRemaining Books After Removal:\n");
            //  display(arr, bookindex); // Display the remaining books
            // }
            // else
            // {
            //     printf("\nNo books remaining in the system.\n");

            break;

        case 9:
            printf("\n--------------- THANK YOU FOR USING THE BOOK MANAGEMENT SYSTEM. --------------- \n");
            return 0; // EXIT the function
        default:
            printf("\n Invalid Choice, PLEASE ENTER A VALID CHOICE \n");
            break;
        }
    }

    return 0;
}

void Storebook(Book *arr, int bookindex)
{
    // VAlue for Book at index 0 shown here position 1
    arr[0].bookid = 01;
    strcpy(arr[0].bookname, "X-Men");
    strcpy(arr[0].authorname, "Hugh Jackman");
    strcpy(arr[0].category, "X-MEN COMICS");
    arr[0].price = 500;
    arr[0].rating = 5.0;

    // VAlue for Book at index 1 shown here Position 2
    arr[1].bookid = 02;
    strcpy(arr[1].bookname, "Iron Man");
    strcpy(arr[1].authorname, "RDJ");
    strcpy(arr[1].category, "Avengers COMICS");
    arr[1].price = 500;
    arr[1].rating = 4.5;

    // VAlue for Book at index 2 shown here Position 3
    arr[2].bookid = 03;
    strcpy(arr[2].bookname, "Deadpool");
    strcpy(arr[2].authorname, "Ryan Reynolds");
    strcpy(arr[2].category, "X-MEN COMICS");
    arr[2].price = 400;
    arr[2].rating = 4.0;

    // VAlue for Book at index 3 shown here Position 4
    arr[3].bookid = 04;
    strcpy(arr[3].bookname, "Captain America");
    strcpy(arr[3].authorname, "Chris Evan");
    strcpy(arr[3].category, "Avengers COMICS");
    arr[3].price = 300;
    arr[3].rating = 3.0;

    // VAlue for Book at index 4 shown here Position 5
    arr[4].bookid = 05;
    strcpy(arr[4].bookname, "Spiderman");
    strcpy(arr[4].authorname, "Tom hollands");
    strcpy(arr[4].category, "spiderverse COMICS");
    arr[4].price = 400;
    arr[4].rating = 5.0;
}

int Addbook(Book *arr, int bookindex)
{
    if (bookindex > 100)
    {
        printf("Space not available");
        return 0;
    }

    printf("\nEnter the Details For Books You want Add at Index %d \n", bookindex);
    printf("\nEnter the Book ID \n");
    scanf("%d", &arr[bookindex].bookid);
    // fflush(stdin);
    while (getchar() != '\n')
        ;

    printf("\nEnter the Book Name \n");
    scanf(" %[^\n]s", arr[bookindex].bookname);
    printf("\nEnter the Author Name \n");
    scanf(" %[^\n]s", arr[bookindex].authorname);
    printf("\nEnter the Category \n");
    scanf(" %[^\n]s", arr[bookindex].category);
    printf("\nEnter the Price \n");
    scanf("%f", &arr[bookindex].price);
    printf("\nEnter the Rating \n");
    scanf("%f", &arr[bookindex].rating);

    printf("\nBook Added Sucessfully \n");

    bookindex++; // increment the book index

    printf("\nDisplaying All Books After Adding:\n");
    display(arr, bookindex); // Call the display function to show all books

    return 1;
}

int RemoveBook(Book *arr, int bookindex)
{
    int searchid;
    int found = 0;

    // Prompt the user for the Book ID to be removed
    printf("\nEnter the Book ID to Remove: ");
    scanf("%d", &searchid);

    // Search for the book with the specified ID
    for (int i = 0; i < bookindex; i++)
    {
        if (arr[i].bookid == searchid)
        {
            found = 1;

            // Shift all subsequent books one position to the left
            for (int j = i; j < bookindex - 1; j++)
            {
                arr[j] = arr[j + 1];
            }

            // Decrease the total book count (locally)
            bookindex--;

            printf("\nDisplaying All Books After Removing:\n");
            display(arr, bookindex); // Call the display function to show all books

            printf("\nBook with ID %d has been successfully removed.\n", searchid);

           
            break;
        }
    }

    if (!found)
    {
        printf("\nNo book found with ID %d.\n", searchid);
    }

    return bookindex; // Return the updated book count
}

int Searchbook(Book *arr, int bookindex)

{
    int found = 0;
    // int flag = 0;
    while (1)
    {
        // printf("\nEnter the Searchid AND Authorname to search Book \n");
        int searchid;
        printf("\nEnter the Book ID to Search \n");
        scanf("%d", &searchid);
        while (getchar() != '\n')
            ; // Clear input buffer
        char Authorname[50];
        printf("\nEnter the Author NAme To search\n");
        scanf("%[^\n]s", Authorname);

        for (int i = 0; i < bookindex; i++)
        {
            if (arr[i].bookid == searchid && strcmp(arr[i].authorname, Authorname) == 0)
            {
                // If a book by the given author is found
                if (found == 0)
                {

                    // printf("Book found with ID : %d  And Name : %s\n", arr[i].bookid, arr[i].bookname);
                    printf("\nBook Found:\n");
                    printf("Book ID: %d\n", arr[i].bookid);
                    printf("Book Name: %s\n", arr[i].bookname);
                    printf("Author Name: %s\n", arr[i].authorname);
                    printf("Category: %s\n", arr[i].category);
                    printf("Price: %.2f\n", arr[i].price);
                    printf("Rating: %.1f\n", arr[i].rating);
                    found = 1;
                    return 1;
                }
            }
        }
        // If no book is found, prompt user to either continue or exit
        printf("Book Not Found, Press 0 to exit or any other number to search again: ");
        scanf("%d", &found);
        if (found == 0)
        {
            break;
        }
    }
    return 0;
}
int Updatebook(Book *arr, int bookindex)
{
    printf("\nEnter the Book ID to Update \n");
    int searchid;
    while (getchar() != '\n')
        ; // Clear input buffer
    scanf("%d", &searchid);

    for (int i = 0; i < bookindex; i++)
    {
        if (arr[i].bookid == searchid)
        {
            printf("\nEnter the price to update \n");
            scanf("%f", &arr[i].price);
            printf("\nEnter the rating to update \n");
            scanf("%f", &arr[i].rating);
            printf("\nBOOK UPDATED SUCESSFULLY\n");
            return 1;
        }
    }
    return 0;
}
void showCategory(Book *arr, int bookindex)
{
    char Category[50];
    int found = 0;
    for (;;)
    {
        printf("\nEnter the Category to search\n");
        while (getchar() != '\n')
            ; // clear buffer
        scanf("%[^\n]s", Category);

        for (int i = 0; i < bookindex; i++)
        {
            if (strcmp(arr[i].category, Category) == 0)
            {
                if (found == 0)
                {

                    printf("\nBook Category Found:\n");

                    printf("\nBook ID: %d\n", arr[i].bookid);
                    printf("Book Name: %s\n", arr[i].bookname);
                    printf("Book author: %s\n", arr[i].authorname);
                    printf("Book price: %2f\n", arr[i].price);
                    printf("Book Name: %2f\n", arr[i].rating);
                    found = 1;
                }
            }
        }
        printf("Book Not Found, Press 0 to exit or any other number to search again: ");
        scanf("%d", &found);
        if (found == 0) // book not found
        {
            break;
        }
    }
}
int showAuthorBook(Book *arr, int bookindex)
{
    char Authorbook[50];
    int found = 0;
    while (1)
    {

        printf("\nEnter the Author Name to search\n");
        while (getchar() != '\n')
            ; // clear buffer
        scanf("%[^\n]s", Authorbook);

        for (int i = 0; i < bookindex; i++)
        {
            if (strcmp(arr[i].authorname, Authorbook) == 0)
            {
                if (found == 1)
                {
                    printf("\nBook Found:\n");
                    printf("Book ID: %d\n", arr[i].bookid);
                    printf("Book Name: %s\n", arr[i].bookname);
                    printf("Book author: %s\n", arr[i].authorname);
                    printf("Book price: %2f\n", arr[i].price);
                    printf("Book Name: %2f\n", arr[i].rating);
                    found = 1;
                    return 1;
                }
            }
        }
        printf("\n NO BOOK BY AUTHOR NAME FOUND, Pls try again by pressing any Number or press 0 to exit\n", Authorbook);
        scanf("%d", &found);
        if (found == 0)
        {
            break;
        }

        return 0;
    }
}
void displayTop3(Book *arr, int bookindex)
{
    int i, j;
    Book temp;

    for (int i = 0; i < bookindex; i++)
    {
        for (int j = i + 1; j < bookindex; j++)
        {
            if (arr[i].price < arr[j].price || (arr[i].price == arr[j].price && arr[i].rating < arr[j].rating))
            {
                temp = arr[i]; // swaping  price & rating in  descending order
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Display top 3 book
    printf("\nTop 3 Books based on Price and Rating:\n");
    for (i = 0; i < 3 && i < bookindex; i++) // Ensure we don't access beyond available books
    {
        printf("\nBook %d:\n", i + 1);
        printf("Book ID: %d\n", arr[i].bookid);
        printf("Book Name: %s\n", arr[i].bookname);
        printf("Author Name: %s\n", arr[i].authorname);
        printf("Category: %s\n", arr[i].category);
        printf("Price: %.2f\n", arr[i].price);
        printf("Rating: %.1f\n", arr[i].rating);
    }
    printf("\nEnd of Top 3 Books Display.\n"); // FIXED: Added clear end message
}

void display(Book *arr, int bookindex)
{
    // display the book details we entered
    for (int i = 0; i < bookindex; i++)
    {
        printf("\nShow the Details of Book at Index %d \n", i);
        printf("Book Id :- %d \n", arr[i].bookid);
        printf("Book Name :- %s \n", arr[i].bookname);
        printf("Author Name :- %s \n", arr[i].authorname);
        printf("Category type :- %s \n", arr[i].category);
        printf("Book price :- %f \n", arr[i].price);
        printf("Book rating :- %f \n", arr[i].rating);
        printf(" \n");
    }
}