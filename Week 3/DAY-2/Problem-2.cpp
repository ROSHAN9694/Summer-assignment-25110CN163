                    //Write a program to Find maximum frequency element.

#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i]; }

    int maxFreq = 0, element;
    for(int i = 0; i < n; i++) {
        int count = 0;
        for(int j = 0; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++; }}

        if(count > maxFreq) {
            maxFreq = count;
            element = arr[i]; }}

            if(maxFreq == 1) {
                cout << "No element repeats." << endl;
                return 0; }
           else {
        cout << "Element = " << element << endl;
        cout << "Frequency = " << maxFreq; }

    return 0;
}