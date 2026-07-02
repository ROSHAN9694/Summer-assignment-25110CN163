                    //Write a program to Create menu-driven array operations system.

#include <iostream>
using namespace std;

int main() {

    int arr[100], n, choice, sum = 0, largest;

    cout << "Enter size of array: ";
    cin >> n;
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; }

    cout << "\n1. Display Array\n";
    cout << "2. Sum of Elements\n";
    cout << "3. Largest Element\n";

    cout << "Enter Choice: ";
    cin >> choice;
     
    switch (choice) {
        case 1:
            cout << "Array Elements: ";
            for (int i = 0; i < n; i++) {
                cout << arr[i] << " "; }
            break;
        case 2:
            for (int i = 0; i < n; i++) {
                sum += arr[i]; }
            cout << "Sum = " << sum;
            break;
        case 3:
            largest = arr[0];
            for (int i = 1; i < n; i++) {
                if (arr[i] > largest)
                    largest = arr[i]; }
            cout << "Largest Element = " << largest;
            break;

        default:
            cout << "Invalid Choice.";
    }

    return 0;
}