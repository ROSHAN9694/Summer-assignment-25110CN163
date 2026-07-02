                        //Write a program to Create marksheet generation system.

#include <iostream>
using namespace std;

int main() {

    float m1, m2, m3, m4, m5;
    float total, percentage;

    cout << "Enter marks of 5 subjects: ";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;
    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5;

    cout << "\n----- Marksheet -----\n";
    cout << "Total Marks : " << total << endl;
    cout << "Percentage  : " << percentage << "%" << endl;

    if (percentage >= 60) {
        cout << "Division : First"; }
    else if (percentage >= 45) {
        cout << "Division : Second"; }
    else if (percentage >= 33) {
        cout << "Division : Third"; }
    else {
        cout << "Result : Fail"; }

    return 0;
}
