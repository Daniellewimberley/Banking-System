#include <iostream>

using namespace std;

int main () {
    double balance = 0;
    int choice;

    while (true) {
        cout << "=BANKING SYSTEM=\n";
        cout << "1. Deposit Money\n";
        cout << "2. Withdraw Money\n";
        cout << "3. Check Balance\n";
        cout << "4. Exit\n";
        cout << "==\n";
        cout << "Choose an Option: ";
        cin >> choice;

        if (choice == 1) {
            double amount;
            cout << "Enter amount to deposit: ";
            cin >> amount;
        if (amount > 0) {
            balance += amount;
            cout << "Deposit successful! New balance: $" << balance << "\n";
        } else {
            cout << "Invalid amount. Deposit must bepositive.\n";
        }
        } else if (choice == 2) {
            double amount;
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful! New balance: $" << balance << "\n";
            } else {
                cout << "Insufficient funds or invalid amount! Withdrawal failed.\n";
            }
        } else if (choice == 3) {
            cout << "Your current balance is: $" << balance << "\n";
        } else if (choice == 4) {
            cout << "Exiting the banking system. Thank you for using our service!\n";
            break;
        } else {
            cout << "Invalid option! Please choose a valid menu option.\n";
    }
}
return 0;
}