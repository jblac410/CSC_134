//M2HW1_Q3
//Blackman, James
//16 Feb 25
//Pizza Calculator

#include <iostream>

using namespace std;

int main() {
   
    int num_pizzas, slices_per_pizza, num_visitors;

    
    cout << "Enter the number of pizzas ordered: ";
    cin >> num_pizzas;

    cout << "Enter the number of slices per pizza: ";
    cin >> slices_per_pizza;

    cout << "Enter the number of visitors: ";
    cin >> num_visitors;
    
    int total_slices = num_pizzas * slices_per_pizza;
   
    int slices_needed = num_visitors * 3;
  
    int leftover_slices = total_slices - slices_needed;

        cout << "Total slices available: " << total_slices << endl;
    cout << "Slices needed for visitors: " << slices_needed << endl;
    
    return 0;
}
