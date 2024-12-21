#pragma once
class Fraction
{
private:
	int numerator;
	int denominator;
public:
	void setNumer(int num);
	void setDenom(int num);
	int getNumer();
	int getDenom();

	void printFract();

	Fraction(int num, int denom);


	double& operator+(Fraction fr);
	double& operator-(Fraction fr);
	Fraction& operator*(Fraction fr);
	Fraction& operator/(Fraction fr);

};

