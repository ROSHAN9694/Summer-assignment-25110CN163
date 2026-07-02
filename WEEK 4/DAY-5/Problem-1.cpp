                          //Write a program to Create number guessing game.

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(time(0));

    int secret = rand() % 100 + 1;
    int guess, attempts = 0;

    cout << "Guess the number (1-100): ";

    do {
        cin >> guess;
        attempts++;
        if (guess > secret)
            cout << "Too High! Try Again: ";
        else if (guess < secret)
            cout << "Too Low! Try Again: ";
        else
            cout << "Correct! You guessed it in " << attempts << " attempts.";
    } while (guess != secret);

    return 0;
}