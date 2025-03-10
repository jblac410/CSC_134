//CSC 134
//M4T1
// Blackman
// 10 March 2025
// Table of squares


#include <iostream>
using namespace std;

int main()
{
    int count = 1;  // Initialize the count variable
    const int MIN_NUM = 1;
    const int MAX_NUM = 10;

    while (count <= 5) 
    {
        cout << "Done" << endl;

        cout << "Table of Squares" << endl;
        cout << "----------------" << endl;

        int num = MIN_NUM;  // Initialize num to MIN_NUM
        int sq;  // Declare sq variable for the square

        while (num <= MAX_NUM)
        {
            sq = num * num;
            cout << num << "\t" << sq << endl;
            num = num + 1;  // Increment num
        }

        count++;  // Increment count to prevent infinite loop
    }

    return 0;
}