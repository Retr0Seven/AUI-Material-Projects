#include <stdio.h>

typedef struct {
    int accountNumber;
    char accountHolder[50];
    float balance;
} BankAccount;

void deposit(BankAccount* account, float amount) {
    account->balance += amount;
}

void withdraw(BankAccount* account, float amount) {
    if (account->balance >= amount) {
        account->balance -= amount;
        printf("Amount withdrawn successfully.\n");
    } else {
        printf("Insufficient balance.\n");
    }
}

int main() {
    BankAccount account;
    account.accountNumber = 123456;
    printf("Enter account holder's name: ");
    scanf("%s", account.accountHolder);
    printf("Enter initial balance: ");
    scanf("%f", &account.balance);
    int choice;
    float amount;
    printf("\nChoose an option:\n");
    printf("1. Deposit\n");
    printf("2. Withdraw\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);
            deposit(&account, amount);
            printf("Amount deposited successfully.\n");
            break;
        case 2:
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);
            withdraw(&account, amount);
            break;
        default:
            printf("Invalid choice.\n");
            return 1;
    }

    printf("\nBank Account Details:\n");
    printf("Account Number: %d\n", account.accountNumber);
    printf("Account Holder: %s\n", account.accountHolder);
    printf("Balance: %.2f\n", account.balance);
    return 0;
}
