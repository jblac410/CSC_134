#include <iostream>
#include <string>
#include <iomanip> // For setprecision and fixed
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
return 0;

}

