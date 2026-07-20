#include <stdio.h>
int main(){
    printf("========================================\n");
    printf("             ATM SIMULATOR\n");
    printf("========================================\n");
    
    float balance = 10000;
    printf("\nCurrent Balance: %.2f\n", balance);

    printf("\n1.Check Balance\n");
    printf("2.Deposit Money\n");
    printf("3.Withdraw Money\n");
    printf("4.Exit\n");

    int choice;
    float deposit;
    float withdraw;
    
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    if (choice == 1){
        printf("\nCurrent Balance: %.2f\n", balance);
    
    } else if (choice == 2){
        printf("\nEnter amount to deposit: ");
        scanf("%f", &deposit);

        if (deposit > 0){
            printf("\n%.2f deposited successfully.\n", deposit);
            balance = balance + deposit;
            printf("Updated Balance: %.2f\n", balance);
        } else {
            printf("Invalid Deposit Amount\n");
        }
    
    } else if (choice == 3){
        printf("Enter amount to withdraw: ");
        scanf("%f", &withdraw);

        if(withdraw > 0){
            if(balance >= withdraw){
                printf("\n%.2f Withdrawal successful.\n", withdraw);
                balance = balance - withdraw;
                printf("Remaining Balance: %.2f\n", balance);
            } else {
                printf("Insufficient Funds\n");
            }
        } else {
            printf("Invalid Withdrawal Amount\n");
        }

    } else if (choice == 4){
        return 0;

    } else {
        printf("Invalid Input\n");
    }

    printf("\nThank You for using the ATM\n");
    return 0;
}