#include <stdio.h>

int main() {
    printf("======================================\n");
    printf("              HANGMAN\n");
    printf("======================================\n");

    char word[] = "APPLE";
    char display[] = "_ _ _ _ _";
    int lives = 6;
    char guess;
    int correct;

    while (lives > 0) {
        printf("\nWord: %s\n", display);
        printf("Lives: %d\n", lives);

        printf("\nGuess a letter: ");
        scanf(" %c", &guess);

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

        if (display[0] != '_' &&
            display[2] != '_' &&
            display[4] != '_' &&
            display[6] != '_' &&
            display[8] != '_') {

            printf("\nWord: %s\n", display);
            printf("Congratulations! You guessed the word!\n");
            return 0;
        }
    }

    printf("\nGame Over!\n");
    printf("The word was: %s\n", word);

    return 0;
}