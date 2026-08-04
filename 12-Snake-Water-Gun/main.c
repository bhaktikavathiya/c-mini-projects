#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));

    printf("=========================================\n");
    printf("             Snake Water Gun\n");
    printf("=========================================\n");

    printf("\n1. Snake\n");
    printf("2. Water\n");
    printf("3. Gun\n");

    int userchoice;

    printf("\nEnter your choice: ");
    scanf("%d", &userchoice);

    int computerchoice = rand()%3+1;

    if (userchoice == 1){
        printf("\nYou chose: Snake\n");
    } else if (userchoice == 2){
        printf("\nYou chose: Water\n");
    } else if (userchoice == 3){
        printf("\nYou chose: Gun\n");
    } else {
        printf("\nInvalid Input\n");
        return 0;
    }

    if (computerchoice == 1){
        printf("Computer chose: Snake\n");
    } else if (computerchoice == 2){
        printf("Computer chose: Water\n");
    } else {
        printf("Computer chose: Gun\n");
    }

    if (userchoice == computerchoice){
        printf("It's a Draw!");
    } else if ( ((userchoice == 1) && (computerchoice == 2)) ||
                ((userchoice == 2) && (computerchoice == 3)) ||
                ((userchoice == 3) && (computerchoice == 1)) ){
        printf("You Won\n");
    } else {
        printf("You Lost\n");
    }
    
    return 0;
}