//CSC 134
//M4Lab1
// Blackman
// 17 March 2025
// Block of Asterisks


#include <iostream>
using namespace std;
int main()
{
string pixel ="🚲"; //copy a unicode symbol as the symbol not the code.
 int WIDTH = 5;
 int HEIGHT = 5;

cout << "Enter Width: " << endl;
cin >> WIDTH   ; 

cout << "Enter Height: " << endl;
cin >> HEIGHT ; 

cout << pixel << endl;
int count = 0;
while (count < 5) //while loop
{
    cout<<pixel;
    count++; 

}
count = 0;
do 
{
    cout << pixel << " ";
    count++;
    
}
while (count < 5);
for (int i=0; i < 10; i++);
{
    cout << endl;
cout << pixel << " printed horizontally  (row) " <<endl;
for (int i = 0; i < WIDTH; i++)
cout << pixel << " ";

cout << endl;
cout << pixel << " printed vertically (column) " <<endl;
for (int i = 0; i < HEIGHT; i++)
cout << pixel << " " << endl;

}
cout << endl << "Printing a box" << WIDTH << " by " << HEIGHT << endl;
for ( int w=0; w < WIDTH; w++ )
{
    cout << pixel << " " << endl;


}
cout << endl;


return 0; 
}