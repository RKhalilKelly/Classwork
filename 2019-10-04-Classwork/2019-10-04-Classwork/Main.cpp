// Robert Khalil Kelly
// Intro to Computer Science
// Mr. Williams
// Period 1
// 2019-10-04-Classwork

#include <iostream>
using namespace std;

int main()
{
	// 3
	float pi = 4 * (1.0 - (1 / 3.0) + (1 / 5.0) - (1 / 7.0) + (1 / 9.0) - (1 / 11.0));
	float pi2 = 4 * (1.0 - (1 / 3.0) + (1 / 5.0) - (1 / 7.0) + (1 / 9.0) - (1 / 11.0) + (1 / 13.0));
	cout << "pi = " << pi << endl;
	cout << "pi2 = " << pi2 << endl;

	//4
	float c;
	cout << "Enter a degree in celsius: ";
	cin >> c;
	float f = (9.0 / 5.0) * c + 32;
	cout << c << " in fahrenheit is " << f << endl;

	//Homework
	float Perimeter = 2 * 5.5 * 3.14;
	float Area = 5.5 * 5.5 * 3.14;

	float Perimeter = (2 * 4.5) + (2 * 7.9);
	float Area = 4.5 * 7.9;
}