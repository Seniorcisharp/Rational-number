#include <iostream>
#include "fractionals.h"
int main()
{
	fractionals fractions(2.0/ 3.0);
	double result = fractions.exponentiation(2.0 / 3.0);
	cout << "Exponentiation result: " << result << endl;
	fractionals fractions1(2.0 / 3.0, 2.4 / 2.6);
	double result1 = fractions1.addition(2.0 / 3.0, 2.4 / 2.6);
	cout << "Exponentiation result: " << result1 << endl;
	
}


