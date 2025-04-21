#include <iostream>
// Blackman, James
//CS 134
//M6 Lab 1
// replicate the best parts of buckshot roulette
using namespace std;

int main() {
    // Your code here
    const int RED = 1;
    const int BLACK = 2;
    const int EMPTY = 0;

    int magazine [] = {RED, BLACK, BLACK, RED};
    for (int shell : magazine) {
        string shellname;
        if (shell == BLACK) {
            shellname = "Black";
        } 
        if (shell == RED) {
            shellname = "Red";
        
        }
        cout << "Next shell " << shellname << endl;
    }
    return 0;
}