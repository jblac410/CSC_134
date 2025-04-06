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
void printAnswerLine(int num, int num_squared);
int double_a_number(int number);

int main() {
   
    
    
    cout << "The squares of 1-10 are: "  << endl;
    for (int num = 1; num <= 10; ++num) 
    {
        int squared_value = square(num);
        
        cout << num << "\t" << square << endl;
        printAnswerLine(num, squared_value);

    }
    return 0;

}

int square(int num)
{
    int result = num * num;
    return result; 
}
void printAnswerline(int num ,int num_squared)
{

    cout << num << "\t" << num_squared << endl;
}
int double_a_number(int number)
{
    return number * 2;
}