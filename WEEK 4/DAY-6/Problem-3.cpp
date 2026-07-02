                       //Write a program to Create salary management system.

#include <iostream>
using namespace std;

int main() {

    float basic, hra, da, deduction, netSalary;

    cout << "Enter Basic Salary: ";
    cin >> basic;
    hra = basic * 0.20;
    da = basic * 0.10;
    cout << "Enter Deduction: ";
    cin >> deduction;

    netSalary = basic + hra + da - deduction;

    cout << "\n----- Salary Details -----\n";
    cout << "Basic Salary : " << basic << endl;
    cout << "HRA          : " << hra << endl;
    cout << "DA           : " << da << endl;
    cout << "Deduction    : " << deduction << endl;
    cout << "Net Salary   : " << netSalary << endl;

    return 0;
}
