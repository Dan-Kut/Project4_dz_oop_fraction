#include "Fraction.h"
#include "iostream"

using namespace std;

void Fraction::setNumer(int num)
{
	this->numerator = num;
}

void Fraction::setDenom(int num)
{
	if (num != 0)
	{
		this->denominator = num;
	}
	else
	{
		cout << "It is impossible to denominator to be 0";
	}
}

int Fraction::getNumer()
{
	return this->numerator;
}

int Fraction::getDenom()
{
	return this->denominator;
}

void Fraction::printFract()
{
	cout << "numerator = " << this->numerator << " and denominator = " << this->denominator << endl;
}

Fraction::Fraction(int num, int denom)
{
	if (denom != 0)
	{
		this->numerator = num;
		this->denominator = denom;
	}
	else
	{
		cout << "It is impossible to denominator to be 0";
	}
}

double& Fraction::operator+(Fraction fr)
{
	double fr1 = double(this->numerator) / double(this->denominator);
	double fr2 = double(fr.numerator) / double(fr.denominator);
    double d = fr1 + fr2;
	return d;
}

double& Fraction::operator-(Fraction fr)
{
	double fr1 = double(this->numerator) / double(this->denominator);
	double fr2 = double(fr.numerator) / double(fr.denominator);
	double d = fr1 - fr2;
	return d;
}

Fraction& Fraction::operator*(Fraction fr)
{
	this->numerator = this->numerator * fr.numerator;
	this->denominator = this->denominator * fr.denominator;
	return *this;
}

Fraction& Fraction::operator/(Fraction fr)
{
	this->numerator = this->numerator * fr.denominator;
	this->denominator = this->denominator * fr.numerator;
	return *this;
}
