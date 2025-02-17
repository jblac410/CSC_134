//M2HW1
//Blackman, James
//16 Feb 25
//Box dimension calculator


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double COST_PER_CUBIC_FOOT = 0.30;
    const double CHARGE_PER_CUBIC_FOOT = 0.52;
    double length, width, height, volume, cost, charge, profit;

    cout << setprecision(2) << fixed << showpoint;
    //cout << "Welcome to Blackman's Boxes! Where we take care of all your box needs." << endl; 
    cout << "Enter the dimensions of the crate (in feet):\n";
    cout << "Length: ";
    cin >> length;
    cout << "Width: ";
    cin >> width;
    cout << "Height: ";
    cin >> height;

    
    volume = length * width * height;
    cost = volume * COST_PER_CUBIC_FOOT;
    charge = volume * CHARGE_PER_CUBIC_FOOT;
    profit = charge - cost;

    
    cout << "The volume of the crate is " << volume << " cubic feet.\n";
    cout << "Cost to build: $" << cost << endl;
    cout << "Charge to customer: $" << charge << endl;
    cout << "Profit: $" << profit << endl;

    return 0;
}