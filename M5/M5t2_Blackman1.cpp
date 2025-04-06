// CSC 134
// M5T2
// Blackman, James
// 6 April 2025 // Adjusted date format slightly for clarity

// create 1 void function and 1 value returning function

#include <iostream>
#include <cmath> // Included, but not currently used. Can be removed if not needed.
#include <iomanip> // Included for better formatting (optional)

using namespace std;

// Declare functions
/*
 * This function calculates the square of an integer.
 * Input: an integer 'number'.
 * Output: the square of the input integer.
 * Type: Value-returning function.
 */
int square(int number);

/*
 * This function prints a formatted line showing a number and its square.
 * Input: the original integer 'num' and its calculated square 'num_squared'.
 * Output: None (prints directly to the console).
 * Type: Void function.
 */
void printAnswerLine(int num, int num_squared);

// Declaration for an additional example function (value-returning)
// This function doubles a given integer.
int double_a_number(int number);


int main() {
    cout << "Calculating squares and printing results using functions." << endl;
    cout << "-------------------------------------------------------" << endl;
    cout << "Number\tSquare" << endl; // Print header
    cout << "------\t------" << endl;

    // Loop through numbers 1 to 10
    for (int num = 1; num <= 10; ++num) {
        // Call the value-returning function to get the square
        int squared_value = square(num);

        // Call the void function to print the result line
        printAnswerLine(num, squared_value);
    }

    cout << "-------------------------------------------------------" << endl;

    // Example usage of the double_a_number function (optional)
    // int my_number = 7;
    // int doubled = double_a_number(my_number);
    // cout << "Double of " << my_number << " is: " << doubled << endl;


    return 0; // Indicate successful execution
}

// --- Function Definitions ---

// Value-returning function: Calculates the square
int square(int num) {
    int result = num * num;
    return result; // Return the calculated square
}

// Void function: Prints one line of the answer
void printAnswerLine(int num, int num_squared) {
    // Print the number and its square, separated by a tab
    // Using iomanip for potential alignment if needed
    cout << num << "\t" << num_squared << endl;
}

// Value-returning function: Doubles a number (example)
int double_a_number(int number) {
    return number * 2;
}