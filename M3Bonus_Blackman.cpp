// CSC 134
// M3 Random Numbers Example
// Blackman, James
// 3/5/2025
// Start with dice rolls


#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cctype> // For tolower()

using namespace std;

int main() {
    char playAgain = 'y'; // Initialize playAgain to 'y' to start the loop
    do {
        cout << "Let's roll some dice!" << endl;
        int seed = time(0);
        srand(seed);

        const int MAX = 6;
        int roll1, roll2, total;
        roll1 = (rand() % MAX) + 1;
        cout << "Your first roll was: " << roll1 << endl;

        roll2 = (rand() % MAX) + 1;
        cout << "Your second roll was: " << roll2 << endl;

        total = roll1 + roll2;
        cout << "Your total roll is: " << total << endl;

        const int SNAKE_EYES = 2;
        const int THREE_LOSE = 3;
        const int BOX_CARS = 12;
        const int LUCKY_SEVEN = 7;
        const int LUCKY_ELEVEN = 11;

        if (LUCKY_SEVEN == total) {
            cout << "Lucky seven! You win!" << endl;
        } else if (LUCKY_ELEVEN == total) {
            cout << "Eleven is a winner!" << endl;
        } else if (SNAKE_EYES == total) {
            cout << "Snake eyes! Too bad, you lose." << endl;
        } else if (THREE_LOSE == total) {
            cout << "Sorry, three is unlucky, you lose." << endl;
        } else if (BOX_CARS == total) {
            cout << "Boxcars! Sorry, you lost." << endl;
        } else {
            cout << "Your point is " << total << " but we'll do that part later." << endl;
        }

        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;
        playAgain = tolower(playAgain); // Make it case-insensitive

    } while (playAgain == 'y');

    cout << "Thanks for playing!" << endl;
    return 0;
}