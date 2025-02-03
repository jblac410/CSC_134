//CSC 134
//M2T1 - The Apple Orchard
// Blackman
// 01-27-2025

#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
string farm_name = "Blackman";
int num_apples = 100;
double cost_each = .25;
string user_name;
int apples_to_buy;

cout << "Hello! What's your name? ";
cin >> user_name;


cout << "Thanks for coming by, " << user_name <<"!" << endl;

cout << setprecision (2) << fixed;

cout << "Welcome to the "<<farm_name<< " apple farm!" << endl;
cout << "There are " << num_apples << " apples in stock"<< endl;
cout << "They cost $" << cost_each << " each." << endl;

double total_cost = num_apples * cost_each;
cout << "The price for all of them is: $"<<total_cost<< endl;

cout<< "How many apples would you like to buy? " << endl;
cin >> apples_to_buy;
total_cost = apples_to_buy * cost_each;

cout << "Thank you! " << apples_to_buy << " apple(s) comes to $ " << total_cost << endl; 
cout <<endl;
return 0;
}