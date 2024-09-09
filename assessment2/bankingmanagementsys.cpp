#include <iostream>
#include <vector>

using namespace std;

class Bank {
private:
    int accountNumber;
    string name;
    float balance;

public:
    // Constructor
    Bank() : accountNumber(0), balance(0.0) {}

    // Function to open an account
    void OpenAccount() {
        cout << "Enter account number: ";
        cin >> accountNumber;
        cout << "Enter account holder's name: ";
        cin.ignore();  // Clear the newline character from the buffer
        getline(cin, name);
        cout << "Enter opening balance: ";
        cin >> balance;
        cout << "Account opened successfully!\n";
    }

    // Function to show account details
    void ShowAccount() const {
        cout << "\nAccount Number: " << accountNumber << endl;
        cout << "Account Holder's Name: " << name << endl;
        cout << "Balance: " << balance << endl;
    }

    // Function to deposit money
    void Deposit() {
        float amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;
        if (amount > 0) {
            balance += amount;
            cout << "Amount deposited successfully! New balance: " << balance << endl;
        } else {
            cout << "Invalid deposit amount.\n";
        }
    }

    // Function to withdraw money
    void Withdrawal() {
        float amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;
        if (amount > 0) {
            if (amount <= balance) {
                balance -= amount;
                cout << "Amount withdrawn successfully! New balance: " << balance << endl;
            } else {
                cout << "Insufficient balance.\n";
            }
        } else {
            cout << "Invalid withdrawal amount.\n";
        }
    }

    // Function to search and display account details
    bool Search(int accNumber) const {
        if (accountNumber == accNumber) {
            ShowAccount();
            return true;
        }
        return false;
    }
};

int main() {
    vector<Bank> accounts;
    int choice;
    int searchAccNumber;

    do {
        cout << "\nBanking Management System\n";
        cout << "1. Open Account\n";
        cout << "2. Show Account\n";
        cout << "3. Deposit\n";
        cout << "4. Withdrawal\n";
        cout << "5. Search Account\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                Bank newAccount;
                newAccount.OpenAccount();
                accounts.push_back(newAccount);
                break;
            }
            case 2: {
                int accNumber;
                cout << "Enter account number to show: ";
                cin >> accNumber;
                bool found = false;
                for (const auto& acc : accounts) {
                    if (acc.Search(accNumber)) {
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "Account not found.\n";
                }
                break;
            }
            case 3: {
                int accNumber;
                cout << "Enter account number to deposit: ";
                cin >> accNumber;
                bool found = false;
                for (auto& acc : accounts) {
                    if (acc.Search(accNumber)) {
                        acc.Deposit();
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "Account not found.\n";
                }
                break;
            }
            case 4: {
                int accNumber;
                cout << "Enter account number to withdraw: ";
                cin >> accNumber;
                bool found = false;
                for (auto& acc : accounts) {
                    if (acc.Search(accNumber)) {
                        acc.Withdrawal();
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "Account not found.\n";
                }
                break;
            }
            case 5: {
                cout << "Enter account number to search: ";
                cin >> searchAccNumber;
                bool found = false;
                for (const auto& acc : accounts) {
                    if (acc.Search(searchAccNumber)) {
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "Account not found.\n";
                }
                break;
            }
            case 6:
                cout << "Exiting the system.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 6);

    return 0;
}

