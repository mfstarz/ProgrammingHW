#include <iostream>
#include <string>
#include <cmath>

using namespace std;

bool string_is_number(string text) {
	for (int i = 0; i < text.length(); i++) {
		if (!isdigit(text[i]) && text[i] != '-') {
			return false;
		}
		return true;
	}
}

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
	string a, b;
	cout << "Enter two integers: ";
	cin >> a >> b;
	if (!string_is_number(a) || !string_is_number(b)) {
		cout << "Error: Not a number";
		return 0;
	}
	cout << "The greatest common divisor of " << a << " and " << b << " using division is " << gcd_div(abs(stoi(a)), abs(stoi(b))) << endl;
	cout << "The greatest common divisor of " << a << " and " << b << " using substraction is " << gcd_sub(abs(stoi(a)), abs(stoi(b))) << endl;
	return 0;
}