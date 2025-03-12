// CSC 134
// M3HW1 - Gold
// Blackman, James
// 11 March 25
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() 
{
    cout << "Question 1" << endl;
    cout << "Hello, I'm a C++ program!" << endl;
    cout << "Do you like me? Please type yes or no." << endl;

    string answer;
    cin >> answer;

    if (answer == "yes") 
    {
        cout << "That's great! I'm sure we'll get along." << endl;
    } else if (answer == "no") 
    {
        cout << "Well, maybe you'll learn to like me later." << endl;
    } else {
        cout << "If you're not sure... that's OK." << endl;
    }


    cout<< "Qestion 2" << endl;
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
    return 0;
}