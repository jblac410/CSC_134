// CSC 134
 // M5Lab2 
 // Blackman, James
 // 6 April 25
 //Area of a rectang
 
 #include <iostream>
using namespace std;
double getLength();
double getWidth();
double getArea(double length, double width);
void displayData (double length, double width, double area);

// Declare (Write the prototypes for)
// the getLength,
// getWidth, getArea, and displayData
// functions here.

int main()
{
	// This program calculates the area of a rectangle.
	// TODO: fix any syntax errors
	
   double length,    // The rectangle's length
          width,     // The rectangle's width
          area;      // The rectangle's area
          
   // Get the rectangle's length.
   length = getLength();
   
   // Get the rectangle's width.
   width = getWidth();
   
   // Get the rectangle's area.
   area = getArea(length, width);
   
   // Display the rectangle's data.
   displayData(length, width, area);
          
   return 0;
}
double getLength()
{
double userLength;
cout<<"Enter the rectangle's length: ";
cin>> userLength;
return userLength;

}
double getWidth()
{
double userWidth;
cout << "Enter the rectangle's width: ";
cin>> userWidth;
return userWidth;
}

double getArea(double length, double width)
{
return length * width;

}

void displayData (double length, double width, double area)
{

//***************************************************
// TODO: write the getLength, getWidth, getArea,    *
// and displayData functions below.                 *
//***************************************************
cout << "\n--- Rectangle Information ---" << endl;

     cout << "Length: " << length << endl;

     cout << "Width:  " << width << endl;

     cout << "Area:   " << area << endl;

    cout << "---------------------------" << endl;

}