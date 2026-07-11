#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    printf("ROCK PAPER SCISSORS\n");
    printf("\nINSTRUCTIONS:\n");
    printf("a. Enter your choice:\n"
            "  1. Rock\n"
            "  2. Paper\n"
            "  3. Scissors\n"
           "b. Rock beats scissors\n"
           "c. Scissors beat paper\n"
           "d. Paper beats rock\n" );
    
    srand(time(NULL));

    int playerChoice;

    printf("\nEnter your choice: ");
    scanf("%d", &playerChoice);

    if (playerChoice != 1 && playerChoice != 2 && playerChoice != 3) {
        printf("Invalid input! Please enter 1, 2, or 3.\n");
        return 0;
    } else if (playerChoice == 1) {
        printf("\nYour choice: Rock\n");
    } else if (playerChoice == 2) {
        printf("\nYour choice: Paper\n");
    } else if (playerChoice == 3) {
        printf("\nYour choice: Scissors\n");
    }

    int computerChoice = rand() % 3 + 1;

    if (computerChoice == 1) {
        printf("Computer choice: Rock\n");
    } else if (computerChoice == 2) {
        printf("Computer choice: Paper\n");
    } else if (computerChoice == 3) {
        printf("Computer choice: Scissors\n");
    }

    if (computerChoice == playerChoice) {
        printf("\nIt's a draw!\n");
    } else if ((playerChoice == 1 && computerChoice == 3) || 
               (playerChoice == 2 && computerChoice == 1) ||
               (playerChoice == 3 && computerChoice == 2)) {
        printf("\nCongratulations! You win!\n");
    } else {
        printf("\nComputer wins! Better luck next time.\n");
    }

    return 0;
}