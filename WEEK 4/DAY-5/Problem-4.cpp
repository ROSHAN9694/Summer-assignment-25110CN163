                     //Write a program to Create quiz application.

#include <iostream>
using namespace std;

int main() {

    int score = 0;
    char ans;

    cout << "Q1. Capital of India?\n";
    cout << "A. Mumbai\nB. Delhi\nC. Jaipur\nD. Chennai\n";
    cout << "Enter answer: ";
    cin >> ans;

    if (ans == 'B' || ans == 'b') {
        score++; }

    cout << "\nQ2. 5 + 7 = ?\n";
    cout << "A. 10\nB. 11\nC. 12\nD. 13\n";
    cout << "Enter answer: ";
    cin >> ans;

    if (ans == 'C' || ans == 'c'){
        score++; }

    cout << "\nQ3. C++ is a?\n";
    cout << "A. Programming Language\nB. Browser\nC. Operating System\nD. Game\n";
    cout << "Enter answer: ";
    cin >> ans;

    if (ans == 'A' || ans == 'a') {
        score++; }

    cout << "\nYour Score = " << score << " out of 3";

    return 0;
}