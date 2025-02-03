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
 
 
 double food_price = 5.99; //dollas
 string store_name = "Blackman BBQ";
 string food_item = "Brisket";
 double sales_tax = .08; 
 int choice; 
 cout << "Welcome to " << store_name << endl;
 cout << "What would you like to order?" << endl;

 
 cout << "You ordered" << endl;
do {
        cout << "Menu:" << endl;
        cout << "1. Brisket 1" << endl;
        cout << "2. BBQ Pork 2" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "You selected Brisket" << endl;
                break;
            case 2:
                cout << "You selected BBQ Pork" << endl;
                break;
            case 3:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }
    } while (choice != 3);
     while (choice != 1 )

    if (choice)
    {
        





    }
return 1; 




}
//// once, before the output
//cout << fixed << setprecision(2);

/*The price before tax
The amount of tax owed (8%)
The total including tax?*/