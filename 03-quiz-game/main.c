#include <stdio.h>
int main(){
    printf("=======================\n");
    printf("       QUIZ GAME\n");
    printf("=======================\n");
    
    int score = 0;

    int correctanswer;
    int useroption;


    
    printf("\nQuestion 1/10\n");
    printf("\nWho won the 2023 World Cup ?\n");
    printf("\n1. India\n"
           "2. Australia\n"
           "3. England\n"
           "4. New Zealand\n");
    printf("\nEnter your choice: ");
    scanf("%d", &useroption);
    correctanswer = 2;
    if (useroption == correctanswer){
        score = score + 1;
        printf("\nCorrect!\n");
    } else if (useroption >= 1 && useroption <= 4){
        printf("\nWrong Answer. Correct Answer is 2. Australia.\n");
    } else {
        printf("\nInvalid response\n");
        return 0;
    }
    printf("\nYour Score: %d/10\n", score);



    printf("\nQuestion 2/10\n");
    printf("\nWhich player is known as the Hitman of Indian cricket?\n");
    printf("\n1. Virat Kohli\n"
           "2. Rohit Sharma\n"
           "3. KL Rahul\n"
           "4. Shubman Gill\n");
    printf("\nEnter your choice: ");
    scanf("%d", &useroption);

    correctanswer = 2;

    if (useroption == correctanswer){
        score = score + 1;
        printf("\nCorrect!\n");
    } else if (useroption >= 1 && useroption <= 4){
        printf("\nWrong Answer. Correct Answer is 2. Rohit Sharma.\n");
    } else {
        printf("\nInvalid response\n");
        return 0;
    }
    printf("\nYour Score: %d/10\n", score);



    printf("\nQuestion 3/10\n");
    printf("\nWhich IPL team has won the first IPL trophy?\n");
    printf("\n1. Chennai Super Kings\n"
           "2. Royal Challengers Bengaluru\n"
           "3. Mumbai Indians\n"
           "4. Rajasthan Royals\n");
    printf("\nEnter your choice: ");
    scanf("%d", &useroption);

    correctanswer = 4;

    if (useroption == correctanswer){
        score = score + 1;
        printf("\nCorrect!\n");
    } else if (useroption >= 1 && useroption <= 4){
        printf("\nWrong Answer. Correct Answer is 4. Rajasthan Royals.\n");
    } else {
        printf("\nInvalid response\n");
        return 0;
    }
    printf("\nYour Score: %d/10\n", score);



    printf("\nQuestion 4/10\n");
    printf("\nHow many balls are there in one over in international cricket?\n");
    printf("\n1. 9\n"
           "2. 4\n"
           "3. 6\n"
           "4. 5\n");
    printf("\nEnter your choice: ");
    scanf("%d", &useroption);

    correctanswer = 3;

    if (useroption == correctanswer){
        score = score + 1;
        printf("\nCorrect!\n");
    } else if (useroption >= 1 && useroption <= 4){
        printf("\nWrong Answer. Correct Answer is 3. 6.\n");
    } else {
        printf("\nInvalid response\n");
        return 0;
    }
    printf("\nYour Score: %d/10\n", score);



    printf("\nQuestion 5/10\n");
    printf("\nWho is known as the 'King' of modern cricket?\n");
    printf("\n1. Virat Kohli\n"
           "2. Rohit Sharma\n"
           "3. Joe Root\n"
           "4. Sachin Tendulkar\n");
    printf("\nEnter your choice: ");
    scanf("%d", &useroption);

    correctanswer = 1;

    if (useroption == correctanswer){
        score = score + 1;
        printf("\nCorrect!\n");
    } else if (useroption >= 1 && useroption <= 4){
        printf("\nWrong Answer. Correct Answer is 1. Virat Kohli.\n");
    } else {
        printf("\nInvalid response\n");
        return 0;
    }
    printf("\nYour Score: %d/10\n", score);



    printf("\nQuestion 6/10\n");
    printf("\nWhich country invented the game of cricket?\n");
    printf("\n1. India\n"
           "2. England\n"
           "3. Australia\n"
           "4. New Zealand\n");
    printf("\nEnter your choice: ");
    scanf("%d", &useroption);

    correctanswer = 2;

    if (useroption == correctanswer){
        score = score + 1;
        printf("\nCorrect!\n");
    } else if (useroption >= 1 && useroption <= 4){
        printf("\nWrong Answer. Correct Answer is 2. England.\n");
    } else {
        printf("\nInvalid response\n");
        return 0;
    }
    printf("\nYour Score: %d/10\n", score);



    printf("\nQuestion 7/10\n");
    printf("\nWhat is the maximum number of runs a batsman can score from a single legal delivery without overthrows?\n");
    printf("\n1. 2\n"
           "2. 4\n"
           "3. 5\n"
           "4. 6\n");
    printf("\nEnter your choice: ");
    scanf("%d", &useroption);

    correctanswer = 4;

    if (useroption == correctanswer){
        score = score + 1;
        printf("\nCorrect!\n");
    } else if (useroption >= 1 && useroption <= 4){
        printf("\nWrong Answer. Correct Answer is 4. 6 runs.\n");
    } else {
        printf("\nInvalid response\n");
        return 0;
    }
    printf("\nYour Score: %d/10\n", score);  



    printf("\nQuestion 8/10\n");
    printf("\nWho was the captain of India's 2011 World Cup-winning team?\n");
    printf("\n1. MS Dhoni\n"
           "2. Virat Kohli\n"
           "3. Rohit Sharma\n"
           "4. Sourav Ganguly\n");
    printf("\nEnter your choice: ");
    scanf("%d", &useroption);

    correctanswer = 1;

    if (useroption == correctanswer){
        score = score + 1;
        printf("\nCorrect!\n");
    } else if (useroption >= 1 && useroption <= 4){
        printf("\nWrong Answer. Correct Answer is 1. MS Dhoni.\n");
    } else {
        printf("\nInvalid response\n");
        return 0;
    }
    printf("\nYour Score: %d/10\n", score);  



    printf("\nQuestion 9/10\n");
    printf("\nWhich fielding position stands directly behind the stumps?\n");
    printf("\n1. Mid-off\n"
           "2. Gully\n"
           "3. Slip\n"
           "4. Wicketkeeper\n");
    printf("\nEnter your choice: ");
    scanf("%d", &useroption);

    correctanswer = 4;

    if (useroption == correctanswer){
        score = score + 1;
        printf("\nCorrect!\n");
    } else if (useroption >= 1 && useroption <= 4){
        printf("\nWrong Answer. Correct Answer is 4. Wicketkeeper.\n");
    } else {
        printf("\nInvalid response\n");
        return 0;
    }
    printf("\nYour Score: %d/10\n", score);  



    printf("\nQuestion 10/10\n");
    printf("\nWhich country has won the most ODI Cricket World Cups?\n");
    printf("\n1. West Indies\n"
           "2. India\n"
           "3. Australia\n"
           "4. England\n");
    printf("\nEnter your choice: ");
    scanf("%d", &useroption);

    correctanswer = 3;

    if (useroption == correctanswer){
        score = score + 1;
        printf("\nCorrect!\n");
    } else if (useroption >= 1 && useroption <= 4){
        printf("\nWrong Answer. Correct Answer is 3. Australia.\n");
    } else {
        printf("\nInvalid response\n");
        return 0;
    }
    printf("\nYour Score: %d/10\n", score);  

    
    printf("\n===========================\n");
    printf("       QUIZ FINISHED");
    printf("\n===========================\n");

    printf("\nYour Final Score: %d/10\n", score);
    if (score == 10){
        printf("That's a Perfect Score!\n");
    } else if (score >= 8 && score <= 9){
        printf("Excellent!\n");
    } else if (score >= 6 && score <= 7){
        printf("Good Job!\n");
    } else if (score >= 4 && score <= 5){
        printf("Keep Practicing!\n");
    } else {
        printf("Better Luck Next Time!\n");
    }

    return 0;
} 