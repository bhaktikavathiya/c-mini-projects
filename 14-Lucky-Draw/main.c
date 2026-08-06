#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_PARTICIPANTS 20
#define MAX_NAME_LENGTH 50

void getParticipants(char participantNames[][MAX_NAME_LENGTH], int participantCount)
{
    int i;

    for (i = 0; i < participantCount; i++)
    {
        printf("Enter participant %d name: ", i + 1);
        scanf("%49s", participantNames[i]);
    }
}

int main()
{
    char participantNames[MAX_PARTICIPANTS][MAX_NAME_LENGTH];
    int participantCount;
    int winnerIndex;

    srand(time(NULL));

    printf("====================================\n");
    printf("            Lucky Draw\n");
    printf("====================================\n");

    printf("\nEnter number of participants (1-20): ");
    scanf("%d", &participantCount);

    if (participantCount <= 0 || participantCount > MAX_PARTICIPANTS)
    {
        printf("Invalid number of participants.\n");
        return 1;
    }

    getParticipants(participantNames, participantCount);

    winnerIndex = rand() % participantCount;

    printf("\nWinner: %s\n", participantNames[winnerIndex]);
    printf("Congratulations!\n");

    return 0;
}