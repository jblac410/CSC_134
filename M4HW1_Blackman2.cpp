// CSC 134
// M4HW1
// Blackman, James
// 30/03/2025
//Gold


    #include <iostream>
using namespace std;

int main() {
    int m_table;

    // Input validation loop
    do {
        cout << "Enter a number from 1 to 12: ";
        cin >> m_table;

        if (m_table < 1 || m_table > 12) { //Or operator 
            cout << "Invalid input. Please try again." << endl;
        }

    } while (m_table < 1 || m_table > 12);

    // Multiplication table loop
    int num = 1;
    while (num <= 12) {
        cout << m_table << " times " << num << " is " << m_table * num << "." << endl;
        num++; //adding one until <=12
    }

    return 0;
}