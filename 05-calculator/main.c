#include <stdio.h>
int main(){
    printf("\n========================\n");
    printf("\n       CALCULATOR\n");
    printf("\n========================\n");

    float firstNumber;
    float secondNumber;
    float result;
    char operator;
    
    printf("\nEnter first number: ");
    scanf("%f", &firstNumber);

    printf("\nEnter operations: ");
    scanf(" %c", &operator);

    printf("\nEnter second number: ");
    scanf("%f", &secondNumber);

    if(operator == '+'){
        result = firstNumber + secondNumber;
        printf("\n%.2f %c %.2f = %.2f\n", firstNumber, operator, secondNumber, result);
    } else if (operator == '-'){
        result = firstNumber - secondNumber;
        printf("\n%.2f %c %.2f = %.2f\n", firstNumber, operator, secondNumber, result);
    } else if (operator == 'x' || operator == '*'){
        result = firstNumber * secondNumber;
        printf("\n%.2f %c %.2f = %.2f\n", firstNumber, operator, secondNumber, result);
    } else if (operator == '/'){
        if (secondNumber == 0.0){
            printf("\nCannot divide by zero\n");
        } else {
        result = firstNumber / secondNumber;
        printf("\n%.2f %c %.2f = %.2f\n", firstNumber, operator, secondNumber, result);}
    } else {
        printf("Invalid Operator\n");
    }
 
    return 0;
}