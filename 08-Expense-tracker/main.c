#include <stdio.h>
int main(){
    printf("=================================\n");
    printf("         EXPENSE TRACKER\n");
    printf("=================================\n");
    
    int expenseNumber;

    printf("\nHow many expenses? ");
    scanf("%d", &expenseNumber);

    if(expenseNumber < 1 || expenseNumber > 20){
        printf("Invalid Input\n");
        return 0;
    }

    int i;
    char category[20][20];
    float amount[20];

    for(i=0; i<expenseNumber; i++){
        printf("\nExpense %d", i+1);
        printf("\nCategory: ");
        scanf("%19s", category[i]);
        printf("Amount: ");
        scanf("%f",&amount[i]);
        if (amount[i] <= 0){
            printf("Expense amount must be greater than 0.\n");
            return 0;
        }
    }

    float totalExpense = 0;
    for(i=0; i<expenseNumber; i++){
        totalExpense = totalExpense + amount[i];
    }
    
    printf("\n============ SUMMARY ============\n");
   
    for(i=0; i<expenseNumber; i++){
        printf("%-15s : %.2f\n",category[i] ,amount[i]);
    }

    printf("\nTotal Expense: %.2f\n", totalExpense);

    return 0;
}