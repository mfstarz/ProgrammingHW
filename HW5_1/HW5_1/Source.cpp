#include <iostream>

using namespace std;

int gcd_div(int a, int b) {
	if (b == 0) {
		return a;
	}
	else {
		return gcd_div(b, a % b);
	}
}

int gcd_sub(int a, int b) {
	if (a == b) {
		return a;
	}
	else if (a > b) {
		return gcd_sub(a - b, b);
	}
	else {
		return gcd_sub(a, b - a);
	}
}

int main()
{
	int a, b;
	cout << "Enter two integers: ";
	cin >> a >> b;
	cout << "The greatest common divisor of " << a << " and " << b << " using division is " << gcd_div(a, b) << endl;
	cout << "The greatest common divisor of " << a << " and " << b << " using substraction is " << gcd_sub(a, b) << endl;
	return 0;
}