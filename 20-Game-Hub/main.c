#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>

int guessNumber() {
    printf("\n==========================================\n");
    printf("               GUESS THE NUMBER\n");
    printf("==========================================\n");

    printf("\nInstructions:\n"
           "1. In this game you guess a random number between 1 to 100.\n"
           "2. If you guess it correctly, you win.\n"
           "3. If your guess is incorrect, the game will tell you whether the correct number is higher or lower.\n");

    int num = rand() % 100 + 1;
    int guess;

    printf("\nEnter your guess (1-100): ");
    scanf("%d", &guess);

    if (guess < 1 || guess > 100) {
        printf("\nInvalid guess! Enter a number between 1 and 100.\n");
        return 0;
    }

    if (num == guess) {
        printf("\nCongratulations! You Won!!\n");
        return 10;
    } else if (num > guess) {
        printf("\nNot quite.\n");
        printf("The correct number is higher than your guess.\n");
    } else {
        printf("\nGood try!\n");
        printf("The correct number is lower than your guess.\n");
    }

    return 0;
}

int RockPaperScissors() {
    printf("\n==========================================\n");
    printf("             ROCK PAPER SCISSORS\n");
    printf("==========================================\n");

    printf("\nINSTRUCTIONS:\n");
    printf("a. Enter your choice:\n"
           "   1. Rock\n"
           "   2. Paper\n"
           "   3. Scissors\n"
           "b. Rock beats scissors\n"
           "c. Scissors beat paper\n"
           "d. Paper beats rock\n");

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
    } else {
        printf("\nYour choice: Scissors\n");
    }

    int computerChoice = rand() % 3 + 1;

    if (computerChoice == 1) {
        printf("Computer choice: Rock\n");
    } else if (computerChoice == 2) {
        printf("Computer choice: Paper\n");
    } else {
        printf("Computer choice: Scissors\n");
    }

    if (computerChoice == playerChoice) {
        printf("\nIt's a draw!\n");
        return 5;
    } else if ((playerChoice == 1 && computerChoice == 3) ||
               (playerChoice == 2 && computerChoice == 1) ||
               (playerChoice == 3 && computerChoice == 2)) {
        printf("\nCongratulations! You win!\n");
        return 10;
    } else {
        printf("\nComputer wins! Better luck next time.\n");
        return 0;
    }
}

int hangman() {
    printf("\n======================================\n");
    printf("              HANGMAN\n");
    printf("======================================\n");

    char word[] = "TOAST";
    char display[] = "_ _ _ _ _";
    int lives = 6;
    char guess;
    int correct;
    char guessed[26] = {0};

    while (lives > 0) {
        printf("\nWord: %s\n", display);
        printf("Lives: %d\n", lives);

        printf("\nGuess a letter: ");
        scanf(" %c", &guess);

        guess = toupper(guess);

        if (guess < 'A' || guess > 'Z') {
            printf("\nPlease enter a letter.\n");
            continue;
        } 
        
        if (guessed[guess - 'A']) {
            printf("\nYou already guessed that letter!\n");
            continue;
        }

        guessed[guess - 'A'] = 1;
        correct = 0;

        for (int i = 0; word[i] != '\0'; i++) {
            if (word[i] == guess) {
                display[i * 2] = guess;
                correct = 1;
            }
        }

        if (correct) {
            printf("\nCorrect!\n");
        } else {
            lives--;
            printf("\nWrong guess!\n");
        }

        if (strchr(display, '_') == NULL) {
            printf("\nWord: %s\n", display);
            printf("Congratulations! You guessed the word!\n");
            return 10;
        }
    }

    printf("\nGame Over!\n");
    printf("The word was: %s\n", word);

    return 0;
}

int diceChallenge() {
    printf("\n=================================\n");
    printf("          DICE CHALLENGE\n");
    printf("=================================\n");

    printf("\n1. Roll one die\n");
    printf("2. Roll two dice\n");

    int choice;

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        int die1 = rand() % 6 + 1;
        printf("\nYou rolled: %d\n", die1);
        return die1;
    } else if (choice == 2) {
        int die1 = rand() % 6 + 1;
        int die2 = rand() % 6 + 1;
        int total = die1 + die2;

        printf("\nDie 1: %d\n", die1);
        printf("Die 2: %d\n", die2);
        printf("Total: %d\n", total);

        return total;
    } else {
        printf("\nInvalid input.\n");
        return 0;
    }
}

void diceResult(int points, int *score) {
    printf("\n-------------------------------------\n");
    printf("             DICE RESULT\n");
    printf("-------------------------------------\n");

    if (points >= 10) {
        printf("\nExcellent roll!\n");
    } else if (points >= 7)
    {
        printf("\nGreat roll!\n");
    } else if (points >= 4) {
        printf("\nGood roll!\n");
    } else {
        printf("\nLow roll!\n");
    }

    *score = *score + points;

    printf("Points earned: %d\n", points);
    printf("Total Score: %d\n", *score);
}

void gameResult(int points, int *score) {
    printf("\n-------------------------------------\n");
    printf("             GAME RESULT\n");
    printf("-------------------------------------\n");

    if (points == 10) {
        printf("\nYou won!\n");
    } else if (points == 5) {
        printf("\nIt's a draw!\n");
    } else {
        printf("\nBetter luck next time!\n");
    }

    *score = *score + points;

    printf("Points earned: %d\n", points);
    printf("Total Score: %d\n", *score);
}

void Scoreboard(int score, int gamesPlayed, char playername[]) {
    printf("\n=========================================\n");
    printf("             TOURNAMENT SCOREBOARD\n");
    printf("=========================================\n");

    printf("\nPlayer: %s\n", playername);
    printf("Current score: %d\n", score);
    printf("Games played: %d\n", gamesPlayed);

    if (gamesPlayed > 0) {
        printf("Average score: %.2f\n",
               (float)score / gamesPlayed);
    }
}

void tournamentRank(int score) {
    if (score >= 30) {
        printf("Tournament Rank: Champion!\n");
    } else if (score >= 20) {
        printf("Tournament Rank: Pro Player!\n");
    } else if (score >= 10) {
        printf("Tournament Rank: Rising Star!\n");
    } else {
        printf("Tournament Rank: Rookie!\n");
    }
}

int main() {
    srand(time(NULL));

    char playername[20];
    int score = 0;
    int gamesPlayed = 0;
    int choice;

    printf("\n=========================================\n");
    printf("                GAME HUB\n");
    printf("             TOURNAMENT MODE\n");
    printf("=========================================\n");

    printf("\nEnter player name: ");
    scanf("%19s", playername);

    printf("Score: %d\n", score);

    do {
        printf("\n1. Guess the Number\n");
        printf("2. Rock Paper Scissors\n");
        printf("3. Hangman\n");
        printf("4. Dice Challenge\n");
        printf("5. View Score\n");
        printf("6. Exit Tournament\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
            {
                int points = guessNumber();
                gameResult(points, &score);
                gamesPlayed++;
                break;
            }

            case 2:
            {
                int points = RockPaperScissors();
                gameResult(points, &score);
                gamesPlayed++;
                break;
            }

            case 3:
            {
                int points = hangman();
                gameResult(points, &score);
                gamesPlayed++;
                break;
            }

            case 4:
            {
                int points = diceChallenge();
                diceResult(points, &score);
                gamesPlayed++;
                break;
            }

            case 5:
                Scoreboard(score, gamesPlayed, playername);
                break;

            case 6:
                printf("\n=========================================\n");
                printf("          TOURNAMENT COMPLETE!\n");
                printf("=========================================\n");

                printf("\nPlayer: %s\n", playername);
                printf("Final Score: %d\n", score);
                printf("Games Played: %d\n", gamesPlayed);

                tournamentRank(score);

                printf("\n=========================================\n");
                printf("             TOURNAMENT OVER!\n");
                printf("=========================================\n");

                printf("\nThank you for playing! Have a wonderful day!\n");
                break;

            default:
                printf("\nInvalid choice.\n");
                break;
        }

    } while (choice != 6);

    return 0;
}