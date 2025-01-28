#include "Fraction.h"
#include "iostream"

using namespace std;

int main()
{
	int num1;
	cout << "Enter numerator for 1 fraction: ";
	cin >> num1;
	int denom1;
	cout << "Enter denominator for 1 fraction: ";
	cin >> denom1;
	int num2;
	cout << "Enter numerator for 2 fraction: ";
	cin >> num2;
	int denom2;
	cout << "Enter denominator for 2 fraction: ";
	cin >> denom2;
	try
	{
		Fraction fr1 = { num1,denom1 };
		Fraction fr2 = { num2,denom2 };


		fr1.printFract();
		fr2.printFract();

		cout << fr1 + fr2 << endl;
		cout << fr1 - fr2 << endl;

		cout << "fr1 * fr2";
		fr1* fr2;
		fr1.printFract();
		cout << "fr1 * fr2";
		fr1 / fr2;
		fr1.printFract();
	}
	catch (invalid_argument ex)
	{
		cout << ex.what() << endl;
	}
	catch (logic_error ex)
	{
		cout << ex.what() << endl;
	}
}