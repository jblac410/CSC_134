// CSC 134
// M5T2
// Blackman, James
// 6 April 25

// create 1 void function and 1 value returning funtion

#include <iostream> 
#include <cmath>
using namespace std;

// declare void functions

/*a main() function
a square() function that takes an int, and returns the square of that int (value returning)
a printAnswerLine() function that prints one line of the answer (void)*/
int square(int number);
void printAnswerLine();
int double_a_number(int number);

int main() {
   
    
    
    cout << "The squares of 1-10 are: "  << endl;
    for 
    (int num = 1; num <= 10; ++num) 
    {
        int square = square(num);
        
        cout << num << "\t" << square << endl;
    }

}

int square(int num)
{
    int square = num * num;
    return square; 
}