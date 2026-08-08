#include <stdio.h>

#define MAX_CONTACTS 20
#define NAME_LENGTH 50
#define PHONE_LENGTH 15

struct Contact
{
    char name[NAME_LENGTH];
    char phone[PHONE_LENGTH];
};

void addContact(struct Contact contacts[], int *contactCount)
{
    if (*contactCount >= MAX_CONTACTS)
    {
        printf("\nContact book is full!\n");
        return;
    }

    printf("\nEnter name: ");
    scanf("%49s", contacts[*contactCount].name);

    printf("Enter phone number: ");
    scanf("%14s", contacts[*contactCount].phone);

    (*contactCount)++;

    printf("\nContact added successfully!\n");
}

void viewContacts(struct Contact contacts[], int contactCount)
{
    int i;

    if (contactCount == 0)
    {
        printf("\nNo contacts saved yet.\n");
        return;
    }

    printf("\n========== CONTACTS ==========\n\n");

    for (i = 0; i < contactCount; i++)
    {
        printf("%d. %s - %s\n",
               i + 1,
               contacts[i].name,
               contacts[i].phone);
    }
}

int main()
{
    struct Contact contacts[MAX_CONTACTS];
    int contactCount = 0;
    int choice;

    printf("====================================\n");
    printf("           CONTACT BOOK\n");
    printf("====================================\n");

    do
    {
        printf("\n1. Add Contact\n");
        printf("2. View Contacts\n");
        printf("3. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                addContact(contacts, &contactCount);
                break;

            case 2:
                viewContacts(contacts, contactCount);
                break;

            case 3:
                printf("\nThank you for using Contact Book!\n");
                break;

            default:
                printf("\nInvalid choice. Please enter 1, 2, or 3.\n");
        }

    } while (choice != 3);

    return 0;
}