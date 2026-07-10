#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));

    printf("Welcome to Guess The Number!\n");
    printf("\n");
    printf("Instructions:\n"
        "1. In this game you guess a random number between 1 to 100.\n"
        "2. If you guess it correct you win\n"
        "3. If your guess is incorrect,the game will tell you whether the correct number is higher or lower.\n");
    
    int num = rand() % 100 + 1;

    int guess;
    printf("\nEnter your guess(1-100):");
    scanf("%d", &guess);
    
    printf("\n");

    if (num == guess){
        printf("\nCorrect guess! You won!!");
    } else if (num>guess){
        printf("\nOOPS!! Wrong Guess\n");
        printf("The correct number is higher than your guess.\n");
    } else {
        printf("\nOh no!! Wrong Guess\n");
        printf("The correct number is lower than your guess.\n");
    }

    printf("The correct number was %d\n", num);

    return 0;
}