// convert number from any base to any other base
// 1. read number from console
// 2. read base of number from console
// 3. read base to convert to from console
// 4. convert number to decimal
// 5. convert number from decimal to new base
// 6. print result to console

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	string number;
	int base, base2;
	int decimal = 0;
	int power = 0;
	int result = 0;
	int remainder = 0;
	string newNumber = "";

	cout << "Enter a number: ";
	cin >> number;
	cout << "Enter the base of the number: ";
	cin >> base;
	cout << "Enter the base to convert to: ";
	cin >> base2;

	// convert number to decimal
	for (int i = number.length() - 1; i >= 0; i--)
	{
		if (number[i] >= '0' && number[i] <= '9')
		{
			decimal += (number[i] - '0') * pow(base, power);
		}
		else if (number[i] >= 'A' && number[i] <= 'F')
		{
			decimal += (number[i] - 'A' + 10) * pow(base, power);
		}
		power++;
	}

	// convert number from decimal to new base
	while (decimal > 0)
	{
		remainder = decimal % base2;
		decimal /= base2;
		if (remainder >= 0 && remainder <= 9)
		{
			newNumber = (char)(remainder + '0') + newNumber;
		}
		else if (remainder >= 10 && remainder <= 15)
		{
			newNumber = (char)(remainder - 10 + 'A') + newNumber;
		}
	}

	cout << "The number in base " << base2 << " is " << newNumber << endl;

	return 0;
}