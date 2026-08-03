#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));

    printf("======================================\n");
    printf("             Slot Machine\n");
    printf("======================================\n");

    printf("\n1. Spin\n");
    printf("2. Exit\n");

    int choice;

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice){
    case 1:{
        int i;
        int reel[3];
        for(i=0; i<3; i++){
            reel[i] = rand()%5+1;
        
            switch(reel[i]){
                case 1:
                    printf("🍒 ");
                break;
                case 2:
                    printf("🍋 ");
                break;
                case 3:
                    printf("🔔 ");
                break;
                case 4:
                    printf("⭐ ");
                break;
                case 5:
                    printf("💎 ");
                break;
            }
        }
        if ((reel[0] == reel[1]) && (reel[1] == reel[2])){
            printf("\nJackpot!! 100 points won\n");
        } else if ((reel[0] == reel[1]) || (reel[1] == reel[2]) || (reel[0] == reel[2])){
            printf("\nWon 10 points");
        } else {
            printf("\nBetter Luck Next Time!");
        }
        break;
    }
    

    case 2:
        printf("\nThanks for playing!\n");
    break;

    default:
        printf("\nInvalid choice!\n");
    }
    return 0;
}