#include <stdio.h>

void startGame();
void cave();
void winEnding();
void escapeEnding();
void gameOverEnding();

void startGame()
{
    int choice;

    printf("====================================\n");
    printf("        THE MYSTERIOUS CAVE\n");
    printf("====================================\n");

    printf("\nYou are walking through a forest at night.\n");
    printf("Suddenly, you discover a mysterious cave.\n");

    printf("\nWhat do you do?\n");
    printf("1. Enter the cave\n");
    printf("2. Leave the area\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            cave();
            break;

        case 2:
            escapeEnding();
            break;

        default:
            printf("\nInvalid choice.\n");
            gameOverEnding();
            break;
    }
}

void cave()
{
    int choice;

    printf("\nYou enter the dark cave.\n");
    printf("After walking for a while, you find a treasure chest.\n");

    printf("\nWhat do you do?\n");
    printf("1. Open the chest\n");
    printf("2. Run away\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        winEnding();
    }
    else if (choice == 2)
    {
        escapeEnding();
    }
    else
    {
        printf("\nInvalid choice.\n");
        gameOverEnding();
    }
}

void winEnding()
{
    printf("\n====================================\n");
    printf("             YOU WIN!\n");
    printf("====================================\n");

    printf("\nYou open the chest and discover a huge treasure!\n");
    printf("Congratulations, adventurer!\n");
}

void escapeEnding()
{
    printf("\n====================================\n");
    printf("           ESCAPE ENDING\n");
    printf("====================================\n");

    printf("\nYou decide that the adventure is too dangerous.\n");
    printf("You safely return home.\n");
    printf("\nYOU ESCAPED!\n");
}

void gameOverEnding()
{
    printf("\n====================================\n");
    printf("             GAME OVER\n");
    printf("====================================\n");

    printf("\nYour adventure comes to an unexpected end.\n");
    printf("Better luck next time!\n");
}

int main()
{
    startGame();

    return 0;
}