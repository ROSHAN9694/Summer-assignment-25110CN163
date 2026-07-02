                       //Write a program to Create contact management system.

#include <iostream>
#include <string>
using namespace std;

int main() {

    string name, phone, email;

    cout << "Enter Contact Name: ";
    getline(cin, name);
    cout << "Enter Phone Number: ";
    getline(cin, phone);
    cout << "Enter Email Address: ";
    getline(cin, email);

    cout << "\n----- Contact Details -----\n";
    cout << "Name  : " << name << endl;
    cout << "Phone : " << phone << endl;
    cout << "Email : " << email << endl;

    return 0;
}