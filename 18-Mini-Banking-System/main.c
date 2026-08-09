#include <stdio.h>

void checkBalance(float balance)
{
    printf("\nCurrent Balance: %.2f\n", balance);
}

void deposit(float *balance)
{
    float amount;

    printf("\nEnter amount to deposit: ");
    scanf("%f", &amount);

    if (amount <= 0)
    {
        printf("\nInvalid amount.\n");
        return;
    }

    *balance += amount;

    printf("\n%.2f deposited successfully!\n", amount);
}

void withdraw(float *balance)
{
    float amount;

    printf("\nEnter amount to withdraw: ");
    scanf("%f", &amount);

    if (amount <= 0)
    {
        printf("\nInvalid amount.\n");
    }
    else if (amount > *balance)
    {
        printf("\nInsufficient balance.\n");
    }
    else
    {
        *balance -= amount;
        printf("\n%.2f withdrawn successfully!\n", amount);
    }
}

int main(){

    printf("=============================================\n");
    printf("             MINI BANKING SYSTEM\n");
    printf("=============================================\n");

    float balance = 10000;
    int choice;

    do{
    printf("\n1. Check Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("4. Exit\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice){
        case 1:
            checkBalance(balance);
        break;

        case 2:
            deposit(&balance);
        break;

        case 3:
            withdraw(&balance);
        break;

        case 4:
            printf("\nThank you for using Mini Banking System!\n");
        break;

        default:
            printf("\nInvalid Choice.\n");
        break;    
    }
} while (choice != 4);

    return 0;
}