                     //Write a program to Create menu-driven string operations system.

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {

    string str, rev;
    int choice;
    
    cout << "Enter a string: ";
    getline(cin, str);

    cout << "\n1. Find Length\n";
    cout << "2. Reverse String\n";
    cout << "3. Check Palindrome\n";

    cout << "Enter Choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Length = " << str.length();
            break;
        case 2:
            rev = str;
            reverse(rev.begin(), rev.end());
            cout << "Reversed String = " << rev;
            break;
        case 3:
            rev = str;
            reverse(rev.begin(), rev.end());
            if (str == rev) {
                cout << "Palindrome String";}
            else {
                cout << "Not a Palindrome"; }
            break;
        default:
            cout << "Invalid Choice.";
    }

    return 0;
}