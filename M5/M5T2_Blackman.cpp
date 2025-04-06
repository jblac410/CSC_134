// CSC 134
// M5T2
// Blackman, James
// 6 April 2025 
// create 1 void function and 1 value returning function

#include <iostream>
#include <cmath> 
#include <iomanip> 

using namespace std;


int square(int number);


void printAnswerLine(int num, int num_squared);


int double_a_number(int number);


int main() {
    cout << "Calculating squares and printing results using functions." << endl;
  
    cout << "Number\tSquare" << endl; 
    

   
    for (int num = 1; num <= 10; ++num) {
        
        int squared_value = square(num);

        
        printAnswerLine(num, squared_value);
    }

    cout << "-------------------------------------------------------" << endl;

   


    return 0;
}


int square(int num) {
    int result = num * num;
    return result; 
}


void printAnswerLine(int num, int num_squared) {
 
    cout << num << "\t" << num_squared << endl;
}


int double_a_number(int number) {
    return number * 2;
}
        