//Blackman, James
//16 Feb 25
//M2HW1
//Bank account calculator



#include <iostream>
#include <iomanip>  // For formatting decimal places

using namespace std;

int main() {
string name;
double starting_balance, deposit_amount, final_balance, withdrawal_amount; 

cout<< "Enter your full name: ";
getline(cin, name);

cout << "Enter your starting balance ($): ";
cin >> starting_balance;

cout << "Enter deposit amount ($): ";
cin >> deposit_amount;

cout << "Enter withdrawal amount ($): ";
cin >> withdrawal_amount;

   
final_balance = starting_balance + deposit_amount - withdrawal_amount;

    
cout << "\n--- Account Summary ---" << endl;
cout << "Name on Account: " << name << endl;
cout << "Account Number: 554587 " << endl;
cout << fixed << setprecision(2); 
cout << "Final Account Balance: $" << final_balance << endl;

    return 0;
}






