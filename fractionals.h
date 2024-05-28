#pragma once
using namespace std;
class fractionals
{
public:
	fractionals(double fraction);
	fractionals(double firstfractions , double secondfractions);
	double  exponentiation(double fraction);
	double addition(double firstfractions, double secondfractions);
	double difference(double firstfractions, double secondfractions);
	double multiplication(double firstfractions, double secondfractions);
private:
	double fraction;
	double firstfractions, secondfractions;
	void setFractionals(double fractions, double firstfractions, double secondfractions);

};

