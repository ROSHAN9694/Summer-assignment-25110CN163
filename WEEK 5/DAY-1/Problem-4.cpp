                    //Write a program to Create inventory management system.

#include <iostream>
#include <string>
using namespace std;

int main() {

    int id;
    string name;
    int quantity;
    float price;

    cout << "Enter Product ID: ";
    cin >> id;
    cin.ignore();
    cout << "Enter Product Name: ";
    getline(cin,name);
    cout << "Enter Quantity: ";
    cin >> quantity;
    cout << "Enter Price: ";
    cin >> price;

    cout << "\n----- Product Details -----\n";
    cout << "Product ID   : " << id << endl;
    cout << "Product Name : " << name << endl;
    cout << "Quantity     : " << quantity << endl;
    cout << "Price        : " << price << endl;
    cout << "Total Value  : " << quantity * price << endl;

    return 0;
}