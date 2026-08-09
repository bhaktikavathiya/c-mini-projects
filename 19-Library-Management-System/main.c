#include <stdio.h>
#include <string.h>

struct Book
{
    int id;
    char title[50];
    char author[50];
    char availability[20];
};

void addBook(struct Book books[], int *bookCount)
{
    printf("\nEnter Book ID: ");
    scanf("%d", &books[*bookCount].id);

    getchar();

    printf("Enter Book Title: ");
    fgets(books[*bookCount].title, 50, stdin);

    printf("Enter Author Name: ");
    fgets(books[*bookCount].author, 50, stdin);

    strcpy(books[*bookCount].availability, "Available");

    (*bookCount)++;

    printf("\nBook added successfully!\n");
}

void displayBooks(struct Book books[], int bookCount){
    
    if (bookCount == 0)
    {
        printf("\nNo books available in the library.\n");
        return;
    }

    for (int i = 0; i < bookCount; i++){
        printf("\nBook ID: %d", books[i].id);
        printf("\nTitle: %s", books[i].title);
        printf("\nAuthor: %s", books[i].author);
        printf("\nAvailability: %s\n", books[i].availability);
    }
}

void searchBook(struct Book books[], int bookCount)
{
    int id;
    printf("\nEnter Book ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < bookCount; i++)
    {
        if (books[i].id == id)
        {
            printf("\nBook found!\n");
            printf("ID: %d\n", books[i].id);
            printf("Title: %s", books[i].title);
            printf("Author: %s", books[i].author);
            printf("Availability: %s\n", books[i].availability);
            return;
        }
    }

    printf("\nBook not found.\n");
}

void issueBook(struct Book books[], int bookCount)
{
    int id;

    printf("\nEnter Book ID to issue: ");
    scanf("%d", &id);

    for (int i = 0; i < bookCount; i++)
    {
        if (books[i].id == id)
        {
            if (strcmp(books[i].availability, "Available") == 0)
            {
                strcpy(books[i].availability, "Issued");
                printf("\nBook issued successfully!\n");
            }
            else
            {
                printf("\nBook is already issued.\n");
            }
            return;
        }
    }

    printf("\nBook not found.\n");
}

void returnBook(struct Book books[], int bookCount)
{
    int id;

    printf("\nEnter Book ID to return: ");
    scanf("%d", &id);

    for (int i = 0; i < bookCount; i++)
    {
        if (books[i].id == id)
        {
            if (strcmp(books[i].availability, "Issued") == 0)
            {
                strcpy(books[i].availability, "Available");
                printf("\nBook returned successfully!\n");
            }
            else
            {
                printf("\nBook is already available.\n");
            }
            return;
        }
    }

    printf("\nBook not found.\n");
}

int main(){
    struct Book books[100];
    int bookCount = 0;
    int choice;    

    printf("===================================================\n");
    printf("             LIBRARY MANAGEMENT SYSTEM\n");
    printf("===================================================\n");

    do{
        printf("\n1. Add book\n");
        printf("2. Display books\n");
        printf("3. Search book\n");
        printf("4. Issue book\n");
        printf("5. Return book\n");
        printf("6. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                addBook(books, &bookCount);                
            break;

            case 2:
                displayBooks(books, bookCount);
            break;

            case 3:
                searchBook(books, bookCount);
            break;

            case 4:
                issueBook(books, bookCount);
            break;

            case 5:
                returnBook(books, bookCount);
            break;

            case 6:
                printf("\nThank you! Happy Reading!\n");
            break;

            default:
                printf("\nInvalid Choice.\n");
            break;

        }

    } while (choice != 6);

    return 0;

}