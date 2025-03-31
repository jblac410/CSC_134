// CSC 134
 // M5Lab1 - Intro to Functions
 // Blackman, James
 // 31 March 25
/*
You can fork this template by clicking on the name above, then click the three
dots on the top right, and click 'fork repl'. This makes a copy for you to use.
*/
#include <iostream>
using namespace std;

// Function Prototypes
// Any functions you make will need to
// be listed here, in this format, at the top.
// This is so the compiler knows to save
// room for them in the final program.
void main_menu();
void choice_front_door();
void choice_back_door();
void choice_go_home();
// TODO: add more choices here

int main() {
  cout << "Welcome to the ISS." << endl;
  // load up the main menu
  main_menu();
  // when we return here, we're done
  cout << "You go back to sleep, and wake up dead from hypoxia!" << endl;
  return 0; // finished with no errors
}

void main_menu() {
  // Write a simple menu that lets the user choose 1,2, or 3, or 4 to quit.
  cout << "Main Menu" << endl;
  cout << "You start awake in your sleeping pod to a blaring alarm and flashing red lights." << endl;
  cout << "Do you:" << endl;
  cout << "1. Go to the console and see why the alarm is on. " << endl;
  cout << "2. Call Houston to see if they are tracking the leak. " << endl;
  cout << "3. Silence alarms and go back to sleep. " << endl;
  cout << "4. [Quit]" << endl;
  cout << "Choose: ";
  int choice;
  cin >> choice;
  if (1 == choice) {
    choice_front_door();
  } else if (2 == choice) {
    // call choice 2 here
  } else if (3 == choice) {
    // call choice 3 here
  } else if (4 == choice) {
    cout << "Ok, quitting game" << endl;
    return; // go back to main()
  } else {
    cout << "That's not a valid choice, please try again." << endl;
    cin.ignore(); // clear the user input
    main_menu();  // try again
  }
}

// FUNCTION DEFINITIONS
// OK, we have the prototypes at the top, but
// now we have to actually write the functions.
// They go here, after main().
void choice_front_door() {
  cout << "The console says \'HULL BREACH IN SCIENCE POD 1.'" << endl;
  cout << "Atmosphere is venting at 20 percent 02 every minute, you have 3 minutes before all oxygen is vented. " << endl;
  cout << "Do you:" << endl;
  cout << "1. Waste time to get into a pressure suit." << endl;
  cout << "2. Head to science pod to check the leak out in your sleep suit. " << endl;
  int choice;
  cout << "Choose: ";
  cin >> choice;
  if (1 == choice) {
    choice_back_door();
  } else if (2 == choice) {
    choice_go_home();
  }
}

void choice_back_door() { cout << "You get your suit on and head to science pod 1" << endl; 

  
  cout << "You see the leak and grab the emergency seal kit.'" << endl;
  
  cout << "Do you:" << endl;
  cout << "1. Seal the hull and call Houston." << endl;
  cout << "2. Seal the hull and go back to sleep " << endl;
  int choice;
  cout << "Choose: ";
  cin >> choice;
  if (1 == choice) {
    choice_back_door();
  } else if (2 == choice) {
    choice_go_home();
  }
}

void choice_go_home() { cout << "You died of hypoxia because you did not put on your pressure suit" << endl; }

// any new choices go here
