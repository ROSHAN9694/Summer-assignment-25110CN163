                      //Write a program to Create ticket booking system.

#include <iostream>
#include <string>
using namespace std;

int main() {

    string name;
    int tickets;
    float price, total;

    cout << "Enter Passenger Name: ";
    getline(cin, name);
    cout << "Enter Number of Tickets: ";
    cin >> tickets;
    cout << "Enter Price Per Ticket: ";
    cin >> price;

    total = tickets * price;

    cout << "\n----- Ticket Details -----\n";
    cout << "Passenger Name : " << name << endl;
    cout << "Tickets        : " << tickets << endl;
    cout << "Price/Ticket   : " << price << endl;
    cout << "Total Amount   : " << total << endl;

    return 0;
} 