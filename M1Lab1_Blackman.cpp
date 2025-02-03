//CSC 134
//M1Lab1 - The Apple Orchard
// Blackman
// 01-27-2025

#include <iostream>
using namespace std;

int main() 
{
string name = "Blackman";
int num_apples = 10;
double cost_each = 0.25;


cout<< "Welcome to the " <<name<< " apple farm!" << endl;
cout<< "There are " <<num_apples<< " apples in stock." <<endl;
cout<< "They cost $" <<cost_each << " each." << endl;
double total_cost = num_apples * cost_each;
cout << "The price for all of them is: $" <<total_cost<< endl;

cout<< endl;
return 0; 







}