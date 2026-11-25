#include <iostream>
#include<string>
using namespace std;

class BankAccount{

    private:
    string accountHolder;
    double balance;

    public:

    // CONSTRUCTOR: Sets up the account with an initial balance
    BankAccount(string name, double initialBalance) {
        accountHolder = name;
        // Only allow positive initial balance
        if (initialBalance >= 0) {
            balance = initialBalance;
        
        }else {
            balance = 0;
            cout << "Warning: Initial balance cannot be negative. Set to 0." << endl;

        }
    }
    // METHOD: Deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Succesfully deposited $" << amount << endl;
        } else {
            cout << " Error: Deposit amount must be greater than 0." << endl;
        }
    }
    //METHOD: Withdraw money
    void withdraw(double amount) {
        if(amount <= 0) {
            cout << "Error: Withdraw amount must be greater than 0." << endl;
            return;//Exit the function early
        }
        // VALIDATION 2: Check if there are sufficient funds
        if (amount > balance) {
            cout << "Error: Insufficient funds! Current balance is $" << balance << endl;

        }else {
            balance -= amount;
            cout << "Succesfully withdrew $" << amount << endl;
        }
    }
    // METHOD: Check balance
    void displayBalance() {
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Current Balance: $" << balance << endl;
    }

};
int main() {
    cout << "---Opening Account---" << endl;
    //create an account for Alice with $500
    BankAccount aliceAccount("Alice Smith", 500.00);
    aliceAccount.displayBalance();

    cout << "\n---Attempting Deposits---" << endl;
    // Attempt to deposit a valid amount
    aliceAccount.deposit(200.00);//Valid
    aliceAccount.deposit(-50.00);//Invalid(negative)

    cout << "\n---Attempting Withdrawals---" << endl;
    aliceAccount.withdraw(200.00);//Valid
    aliceAccount.withdraw(1000.00);//Invalid(Insufficient funds)

    cout <<"\n---Final Account Status---" << endl;
    aliceAccount.displayBalance();
    return 0;

}
