#include <iostream>
using namespace std;

float balance = 0;

void deposit() {
    float amount;
    cin >> amount;
    balance += amount;
    cout << "Balance = " << balance << endl;
}

void withdraw() {
    float amount;
    cin >> amount;
    if (amount <= balance) {
        balance -= amount;
        cout << "Balance = " << balance << endl;
    } else {
        cout << "Insufficient Balance" << endl;
    }
}

void checkBalance() {
    cout << "Balance = " << balance << endl;
}

int main() {
    int choice;

    do {
        cout << "\n1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\n";
        cin >> choice;

        switch (choice) {
            case 1: deposit(); break;
            case 2: withdraw(); break;
            case 3: checkBalance(); break;
            case 4: cout << "Thank you"; break;
            default: cout << "Invalid Choice";
        }

    } while (choice != 4);

    return 0;
}