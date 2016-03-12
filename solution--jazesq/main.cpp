#include <iostream>
#include "fib.h"
#include "gcd.h"
#include "power.h"
#include "template.h"
#include "triangle.h"
#include "header.h"

using std::cout;
using std::endl;
int main()
{

//-----------------------------------------------------------------------------------------------------------

	try {
		throw 5;
	}

	catch (int e)
	{
		cout << "The exception was defined as an int: " << e << endl;
	}
	catch (double e)
	{
		cout << "The exception was defined as a double: " << e << endl;
	}
//-----------------------------------------------------------------------------------------------------------
	cout << "The recoursive version of fib 1-15 is" << endl;
	for (int i = 1; i <= 15; i++) {
		cout << fib(i) << " ";
	}
	cout << endl;

//-----------------------------------------------------------------------------------------------------------
	
	cout << "The iterative version of fib 1-15 is" << endl;
	for (int n = 1; n <= 15; n++) {
		cout << fib_iter(n) << " ";
	}
	cout << endl;
//-----------------------------------------------------------------------------------------------------------

	cout << "The recoursive version of the greatest common divisor is: " << gcd(6, 12) << endl;

//-----------------------------------------------------------------------------------------------------------

	cout << "The iterative version of the greatest common divisor is: " << gcd_iter(6, 12) << endl;

//-----------------------------------------------------------------------------------------------------------
	cout << "The recoursive version of the Power function is: " << pow(3, 5) << endl;

//-----------------------------------------------------------------------------------------------------------

	cout << "The iterative version of the Power function is: " << pow_iter(3, 5) << endl;

//----------------------------------------------------------------------------------------------------------

	cout << "The template function"; 
	PrintSquare(-3);
	cout << endl;
//----------------------------------------------------------------------------------------------------------

	cout << "The recoursive version of the triangle function is " << endl;
	for (int i = 1; i <= 15; i++) {
		cout << triangle_iter(i) << " ";
	}
	cout << endl;

////----------------------------------------------------------------------------------------------------------
//
	cout << "The iterative version of the triangle function is" << endl;
	for (int i = 1; i <= 15; i++) {
		cout << triangle_iter(i) << " ";
	}
	cout << endl;

//---------------------------------------------------------------------------------------------------------





	system("pause");
	return 0;
	
}
