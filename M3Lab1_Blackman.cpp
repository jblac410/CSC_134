// CSC 134
// M3Lab1 
// Blackman, James
// 3/24/2025
// Asking a question

#include <iostream>
#include <string>
using namespace std;



void chooseDoor1();
void chooseDoor2();
void chooseDoor3();
void chooseDoor4();

// the lines above tell the program that these functions will 
// exist, but we have to define them later on in the file.
////

// beginning of the main() method
int main() 
{
std::string run_again;
    do {

  
  // this program will ask a question and respond to it.
  // You should run it, and test it by typing in different values.
  // Example test values: 1, 2, 3, banana try all of them

  int choice; 

  // ask the question
  cout << "Welcome to the Chooser or Loser!" << endl;
  cout << "The only game show that gives the contenstants the choice of winning a thing or losing a thing! probably" << endl;
  cout << "You have four choices to choose from: you can open Door 1, stick your hand in Jar 2," << endl;
  cout << "fall in to hole 3, or maybe the best option, leave this place! " << endl;
  cout << "All you have to do is choose what mystery to uncover by typing 1, 2, 3, or 4: " << endl; cout << "" << endl;
  cout << "" << endl;
  cout << "" << endl;
  cout << "" << endl;
  cin >> choice;

  if (1 == choice) 
  {
    chooseDoor1();
  }
  
  else if (2 == choice) 
  {
    chooseDoor2();
  }
  
  else if (3 == choice) 
  {
    chooseDoor3();
  }
  
  else if (4 == choice) 
  {
    chooseDoor4();
  }
  
  else 
  {
    cout << "I'm sorry, that is not a valid choice." << endl;
  }

  cout << "Thank you for playing!" << endl;
  std::cout << "Play again? (yes/no): ";
        std::cin >> run_again;
    } while (run_again == "yes");

    std::cout << "Program finished." << std::endl;
  return 0; // tells the computer that we finished without errors

} // end of the main() method

////
// After main(), we define all our other functions.
// (Declaring means "This function exists", we did that above.)
// (Defining means "This is what the function does".)
////

void chooseDoor1() {
  // this function is called in main if the user chooses 1.
  cout << "You chose Door 1" << endl;
  cout << "You win ... A SLIPPERY NEWT!" << endl;
}

void chooseDoor2() 
{
 
  cout << "You chose to stick your hand in a jar" << endl;
  cout << "You win ... A SILLY ANT! How silly the ant is, is up to your interpretation of normal vs silly ant behavior." << endl;
}
void chooseDoor3() 
{
 
    cout << "You chose fall into a pit" << endl;
    cout << "You win ... A CHEST OF GOLD! But you now live in the hole, until death. Enjoy your new wealth!" << endl;
  }
  void chooseDoor4() 
  {
 
    cout << "You chose to leave. " << endl;
    cout << "You win... the rest of your life! Hate to see you leave, but love to see you go." << endl;
    
  }
// If we had a Door #3, or 4, we would add another else if to our
// main(), and then declare and define chooseDoor3() and so on.