#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));

    printf("===============================\n");
    printf("          Dice Roller\n");
    printf("===============================\n");

    printf("\n1. Roll one die\n");
    printf("2. Roll two dice\n");
    printf("3. Exit\n");

    int choice;

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    

    if(choice == 1){

        int die1 = rand()%6+1;
        printf("\nYou rolled: %d\n", die1);

    } else if(choice == 2){

        int die1 = rand()%6+1;
        int die2 = rand()%6+1;
        int total = die1 + die2;

        printf("\nDie 1: %d\n", die1);
        printf("Die 2: %d\n", die2);
        printf("Total: %d\n", total);

    } else if(choice == 3){

        printf("\nThanks for using Dice Roller!");
        return 0;

    } else {

        printf("\nInvalid input");

    }

    return 0;
}