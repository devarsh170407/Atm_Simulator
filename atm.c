#include <stdio.h>

int main() {
    int pin = 1747;
    int enteredPin, option;
    float balance = 100000.00; 
    float amount;

    printf("Welcome to the ATM Simulator!\n");

    
    printf("Please enter your PIN: ");
    scanf("%d", &enteredPin);

    if (enteredPin != pin) {
        printf("Incorrect PIN. Exiting program.\n");
        return 0;
    }

    while (1) {
        printf("\nATM Menu:\n");
        printf("1. Balance Inquiry\n");
        printf("2. Withdraw Money\n");
        printf("3. Deposit Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &option);

        if (option == 1) {
        
            printf("Your current balance is: %.2f ruppee\n", balance);
        } else if (option == 2) {
            
            printf("Enter the amount to withdraw: ");
            scanf("%f", &amount);
            if (amount > balance) {
                printf("Insufficient balance!\n");
            }  else {
                balance -= amount;
                printf("Withdrawal successful! Your new balance is: %.2f rupee\n", balance);
            }
        } else if (option == 3) {
        
            printf("Enter the amount to deposit: ");
            scanf("%f", &amount);
            
                balance += amount;
                printf("Deposit successful! Your new balance is: %.2f rupee\n", balance);
            
        } else if (option == 4) {
            
            printf("Thank you for using the ATM. Have a nice day!\n");
            break;
        } else {
            
            printf("Invalid option. Please try again.\n");
        }
    }

    return 0;
}