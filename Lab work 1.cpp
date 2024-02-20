/*  Program purpose: To calculate the area of either a circle or a rectangle.
	Progremmer: Mohamad Syamil Bin Si Manja
	Date: 20.2.2024	 
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int choice;
	double radius, length, width, area;
	//Declare the constant PI
	const double PI = 3.142;
	
	cout << "Choose a shape to calculate its area:" << endl;
	cout << "1. Circle" << endl;
	cout << "2. Rectangle" << endl;
	cout << "Enter your choice (1 or 2): ";
	cin >> choice;
	
	if (choice == 1) {
		cout << "Enter the radius of the cirle: ";
		cin >> radius;
		
		area = PI * pow(radius, 2);
		cout << "Area of the circle is: " <<area<<endl;
	}
	else if (choice == 2) {
		cout << "Enter the length and width of the recntangle: ";
		cout << "Enter the lenght of the rectengle: ";
		cin >> length;
		cout << "Enter the width of the rectangle: ";
		cin >> width;
		
		if ((length <= 0) || (width <= 0))
			cout << "Invalid input. Length and width cannot be negative." << endl;
			
			
		area = length * width; //Calculate area of rectangle
		cout << "Area of rectangle is: " << area << endl;
		
	}
	else
		cout << "Invalid choice. Pleace enter 1 or 2." <<endl;
	//end of if
	
	return 0;
}//end of the main function