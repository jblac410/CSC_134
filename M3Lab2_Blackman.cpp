// CSC 134
// M3Lab2
// Blackman, James
// 3/26/2025
// Grade Calculator

#include <iostream>
using namespace std;

int main() 
{
    std::string run_again;
do {
int num_grade;
string letter_grade; 

        cout<< "Number grade to letter grade conversion program." << endl;
        cout<< "Enter the number grade: ";
        cin >> num_grade;
        if (num_grade <= 0 || num_grade >=100)
        {
        cout << "Invalid Grade, please input again. ";
        
        }
        else if (num_grade >=90 )
        { 
            letter_grade = "A"; 
        cout << "Great job, you got an A! " << endl;
        }

        else if (num_grade >=80)
        {
            letter_grade = "B";
            cout << "Good job, you got an B! " << endl;

        }

        else if (num_grade >= 70)
        {
            letter_grade = "C";
            cout << "Keep working at it, you got an C! " << endl;
        }

        else if (num_grade >= 60)
        {
            letter_grade = "D";
            cout << "Please see your instructor, you got an D! " << endl;


        }

        else if (num_grade >= 0)
        {
            letter_grade = "F";
            cout << "See your instructor, you got an F! " << endl;
            cout <<"The grade " << num_grade<< " is a " << letter_grade << endl;

        }
        
 
std::cout << "Input another grade? (y/n): ";
        std::cin >> run_again;
   } while (run_again == "y");

    std::cout << "Program finished." << std::endl;


return 0; 
}









