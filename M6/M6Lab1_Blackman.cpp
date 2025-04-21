#include <iostream>
// Blackman, James
//CS 134
//M6 Lab 1
// replicate the best parts of buckshot roulette
using namespace std;
#include <vector>
#include <iostream>
int main() {
    // Your code here
    const int RED = 1;
    const int BLACK = 2;
    const int EMPTY = 0;

    int magazine [] = {RED, BLACK, BLACK, BLACK};
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
    
vector<int> mag;
//load mag
mag.push_back(RED);
mag.push_back(BLACK);
mag.push_back(BLACK);
mag.push_back(BLACK);
int num_shells = 2;
int current_shell = mag.at(num_shells - 1);
cout << "Next shell " << current_shell << endl;
mag.pop_back();
num_shells--;
current_shell = mag.at(num_shells - 1);
cout << "Next shell " << current_shell << endl;
mag.pop_back();
cout << "Mag contains " << mag.size() << " shells" << endl;
cout<< "It could hold up to " <<mag.capacity() << " before resizing." << endl;
return 0;
}
