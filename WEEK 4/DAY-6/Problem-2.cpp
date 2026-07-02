                        //Write a program to Create employee management system.

#include <iostream>
#include <string>
using namespace std;

int main() {

    int id;
    string name, designation;
    float salary;

    cout << "Enter Employee ID: ";
    cin >> id;
    cin.ignore();
    cout << "Enter Employee Name: ";
    getline(cin, name);
    cout << "Enter Designation: ";
    getline(cin, designation);
    cout << "Enter Salary: ";
    cin >> salary;

    cout << "\n----- Employee Details -----\n";
    cout << "ID          : " << id << endl;
    cout << "Name        : " << name << endl;
    cout << "Designation : " << designation << endl;
    cout << "Salary      : " << salary << endl;

    return 0;
}
