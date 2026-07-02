                        //Write a program to Create bank account system.

#include <iostream>
#include <string>
using namespace std;

int main() {

    string name;
    int accountNo, choice;
    float balance, amount;

    cout << "Enter Account Number: ";
    cin >> accountNo;
    cin.ignore();
    cout << "Enter Account Holder Name: ";
    getline(cin, name);
    cout << "Enter Initial Balance: ";
    cin >> balance;

    cout << "\n1. Deposit\n2. Withdraw\n";
    cout << "Enter Choice: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter Deposit Amount: ";
        cin >> amount;
        balance += amount; }
    else if (choice == 2) {
        cout << "Enter Withdrawal Amount: ";
        cin >> amount;
        if (amount <= balance) {
            balance -= amount; }
        else {
            cout << "Insufficient Balance.\n"; }}
    else {
        cout << "Invalid Choice.\n"; }

    cout << "\n----- Account Details -----\n";
    cout << "Account Number : " << accountNo << endl;
    cout << "Account Holder : " << name << endl;
    cout << "Balance        : " << balance << endl;

    return 0;
}
