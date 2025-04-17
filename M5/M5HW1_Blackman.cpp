// CSC 134
 // M5HW1
 // Blackman, James
 // 13 April 25
 //Bronze


#include <iostream>
#include <string>
#include <iomanip> 
using namespace std;

int main() {
    string month1, month2, month3;
    double rainfall1,rainfall2, rainfall3;

    cout << "Enter month: ";
    cin>> month1;
    
    cout << "Enter rainfall for " <<month1 << ": ";
    cin>> rainfall1;
    
    cout << "Enter month: ";
    cin>> month1;
    
    cout << "Enter rainfall for " <<month2 << ": ";
    cin>> rainfall2;
    
    cout << "Enter month: ";
    cin>> month1;
    
    cout << "Enter rainfall for " <<month3 << ": ";
    cin>> rainfall3;
    
    double averageRainfall = (rainfall1 + rainfall2 + rainfall3) / 3.0;
    cout<< "The average rainfall for all three months is " <<fixed<< setprecision(2)<<averageRainfall<<"inches." <<endl;


double width, length, height;

    
    cout << "Enter the width of the block: ";
    cin >> width;

    
    if (width <= 0) {
        cout << "Error: Width cannot be zero or less." << endl;
        return 1; 
    }

    cout << "Enter the length of the block: ";
    cin >> length;

    if (length <= 0) {
        cout << "Error: Length cannot be zero or less." << endl;
        return 1; 
    }

  
    cout << "Enter the height of the block: ";
    cin >> height;

   
    if (height <= 0) {
        cout << "Error: Height cannot be zero or less." << endl;
        return 1;
    }

    
    double volume = width * length * height;

    cout << "The volume of the block is: " << volume << endl;


    int number;

    cout << "Enter a number (1 - 10): ";
    cin >> number;

   
    if (number < 1 || number > 10) {
        cout << "Error: Number must be within the range of 1 through 10." << endl;
        return 1; 
    }

    
    cout << "The Roman numeral version of " << number << " is ";
    switch (number) {
        case 1:
            cout << "I";
            break;
        case 2:
            cout << "II";
            break;
        case 3:
            cout << "III";
            break;
        case 4:
            cout << "IV";
            break;
        case 5:
            cout << "V";
            break;
        case 6:
            cout << "VI";
            break;
        case 7:
            cout << "VII";
            break;
        case 8:
            cout << "VIII";
            break;
        case 9:
            cout << "IX";
            break;
        case 10:
            cout << "X";
            break;
    }
    cout << "." << endl;

    return 0;

}