                      //Write a program to Create library management system.

#include <iostream>
#include <string>
using namespace std;

int main() {

    int bookId;
    string title, author;
    char available;

    cout << "Enter Book ID: ";
    cin >> bookId;
    cin.ignore();
    cout << "Enter Book Title: ";
    getline(cin, title);
    cout << "Enter Author Name: ";
    getline(cin, author);
    cout << "Is Book Available? (Y/N): ";
    cin >> available;

    cout << "\n----- Library Record -----\n";
    cout << "Book ID   : " << bookId << endl;
    cout << "Title     : " << title << endl;
    cout << "Author    : " << author << endl;

    if (available == 'Y' || available == 'y') {
        cout << "Status    : Available"; }
    else {
        cout << "Status    : Not Available"; }

    return 0;
}
