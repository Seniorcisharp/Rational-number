#include "fractionals.h"
#include <corecrt_math.h>
#include <stdexcept>

using namespace std;

fractionals::fractionals(double fraction)
{
	this->fraction = fraction;
}

fractionals::fractionals(double firstfractions, double secondfractions)
{
	this->firstfractions = firstfractions;
	this->secondfractions = secondfractions;
}

double  fractionals::exponentiation(double fraction)
{
	return pow(fraction, 2);
}

double fractionals::addition(double firstfractions, double secondfractions)
{
	return firstfractions + secondfractions;
}

double fractionals::difference(double firstfractions, double secondfractions)
{
	return firstfractions - secondfractions;
}

double fractionals::multiplication(double firstfractions, double secondfractions)
{
	return firstfractions * secondfractions;
}

void fractionals::setFractionals(double fractions, double firstfractions, double secondfractions)
{
	if (fractions == 0 || firstfractions == 0 || secondfractions == 0)
	{
		throw invalid_argument("Invalid argument: fractions, firstfractions, or secondfractions is zero");
	}
}
