 // CSC 134
// M2T2
 // Tim Blackman
 // 02-03-2025
  // reciept calculator
#include <iostream>
#include <iomanip> //for two decimals
using namespace std;

int main()
{
 //set up variables
//do the order
// figure out the subtotal and total
 // print the reciept
 
 
 
 string store_name = "Blackman BBQ";
 string food_item = "Brisket";
 double food_price = 5.99; //dollas

 
 
 
 cout << "Welcome to " << store_name << endl;
 cout << "You have chosen " << food_item << " that will be $" << food_price << endl;
 cout << endl;
  cout << endl;
  cout << endl;
  cout << endl; 
 double subtotal, total; 
 subtotal = food_price;
  


 double tax_percent = .08;
 double tax_cost = tax_percent * subtotal;
 total = subtotal + tax_cost;
 
 cout << setprecision(2) << fixed;
 cout << "YOUR RECEIPT" << endl;
 cout << "-------------------------" << endl;
 cout << "Subtotal:\t $" << subtotal << endl;
 cout << "Tax:\t\t $" << tax_cost << endl;
 cout << "-------------------------" << endl;
 cout << "Total:\t\t $" << total << endl;
 cout << "Have a nice day!" << endl;
 cout << endl; 
return 0; 

 



}