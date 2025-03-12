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
  
 cout << "Welcome to " << store_name << endl;
 
  cout << endl; 
  cout << endl;
  cout << endl; 
  double mealPrice, taxRate = 0.08, tipRate = 0.15;
  int orderType; 

  cout << "Enter price of the meal: $";
  cin >> mealPrice;

  cout << "Please enter 1 if the order is dine in, 2 if it is to go: ";
  cin >> orderType;

  double tax = mealPrice * taxRate;
  double tip = 0;

  if (orderType == 1) 
  {
      tip = mealPrice * tipRate;
  }

  double total = mealPrice + tax + tip;

  cout << fixed << setprecision(2); // decimals
  cout << "Meal: $" << mealPrice << endl;
  cout << "Tax: $" << tax << endl;
  if (tip > 0) {
      cout << "Tip: $" << tip << endl;
  }
  cout << "Total: $" << total << endl;
  


 
 cout << setprecision(2) << fixed;
 cout << "YOUR RECEIPT" << endl;
 cout << "-------------------------" << endl;
 cout << "Subtotal:\t $" << mealPrice << endl;
 cout << "Tax:\t\t $" << taxRate << endl;
 cout << "-------------------------" << endl;
 cout << "Total:\t\t $" << total << endl;
 cout << "Have a nice day!" << endl;
 cout << endl; 
return 0; 

 



}