#include <stdio.h>

int main(){
    printf("==========================================\n");
    printf("             Mood Recommender\n");
    printf("==========================================\n");

    printf("\nSelect your mood:\n");

    printf("\n1. Happy\n");
    printf("2. Sad\n");
    printf("3. Stressed\n");
    printf("4. Tired\n");
    printf("5. Angry\n");
    printf("6. Bored\n");
    printf("7. Anxious\n");
    printf("8. Motivated\n");
    printf("9. Confident\n");
    printf("10. Sick\n");


    int choice;

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    printf("\nRecommendation:\n");

    switch(choice){
        case 1:
            printf("Share your happiness with someone or keep doing what you love!\n");
        break;

        case 2:
            printf("Listen to your favorite music, talk to a friend, or take a short walk.\n");
        break;

        case 3:
            printf("Take a 10-minute break, breathe deeply, and drink some water.\n");
        break;

        case 4:
            printf("Get some rest or take a short power nap.\n");
        break;

        case 5:
            printf("Count to ten, take deep breaths, and step away for a few minutes.\n");
        break;

        case 6:
            printf("Learn a new skill, read a book, or try a fun hobby.\n");
        break;

        case 7:
            printf("Focus on your breathing and write down what's worrying you.\n");
        break;

        case 8:
            printf("Start working on your most important goal while the motivation lasts!\n");
        break;

        case 9:
            printf("Challenge yourself with something you've been avoiding.\n");
        break;

        case 10:
            printf("Rest well, stay hydrated, and follow your doctor's advice.\n");
        break;
        
        default:
            printf("Invalid option. Enter the correct number.\n");
            
    }

    printf("\nTake care and have a wonderful day!\n");

    return 0;

}