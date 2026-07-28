#include <stdio.h>

struct Task {
    char task[50];
};

int main(){

    printf("====================================\n");
    printf("             TO-DO LIST\n");
    printf("====================================\n");
    
    int choice = 0;
    struct Task s[50];
    int i = 0;

    while(choice != 3){
    
        printf("\n1. Add Tasks\n");
        printf("2. View Tasks\n");
        printf("3. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        while(getchar() != '\n');

        switch(choice){
            case 1:{
                    if(i < 50){
                    printf("\nEnter your task: ");
                    fgets(s[i].task, 50, stdin);
                    i++;

                    printf("Task added successfully!\n");
                    } else {
                    printf("Task list is full!\n");
                }
                break;
            }
            case 2:{
                if(i == 0){
                    printf("\nNo tasks available!");
                } else {
                    for(int j=0; j<i; j++){
                    printf("\nTask %d: %s", j+1, s[j].task);
                    }
                }
                break;
            }
            case 3:{
                printf("\nExiting To-Do List");
                break;
            }
            default:{
                printf("\nInvalid choice!\n");
            }
        }
    }

    return 0;
}