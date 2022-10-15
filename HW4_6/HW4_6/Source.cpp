#include <iostream>
#include <string>

using namespace std;

int romanToInt(char ch) {
	switch (ch)
	{
	case 'I':
		return 1;
	case 'V':
		return 5;
	case 'X':
		return 10;
	case 'L':
		return 50;
	case 'C':
		return 100;
	case 'D':
		return 500;
	case 'M':
		return 1000;
	default:
		return 0;
	}
}

int main() {
	char roman_number[] = "XVXXV";
	int chars_to_num[sizeof(roman_number)]{};
	int converted = 0;

	// convert individual values
	for (int i = 0; i < sizeof(roman_number); i++) {
		chars_to_num[i] = romanToInt(roman_number[i]);
	}

	// check if V, L, D are repeated
	for (int i = 0; i < sizeof(chars_to_num) / sizeof(chars_to_num[0]) - 1; i++) {
		if ((chars_to_num[i] == 5 || chars_to_num[i] == 50 || chars_to_num[i] == 500) && chars_to_num[i] == chars_to_num[i + 1]) {
			cout << "wrong number";
			return 0;
		}
	}

	// check if there's >3 repeats
	for (int i = 0; i < sizeof(chars_to_num) / sizeof(chars_to_num[0]) - 1; i++) {
		if (chars_to_num[i] == chars_to_num[i + 1] && chars_to_num[i + 1] == chars_to_num[i + 2] && chars_to_num[i + 2] == chars_to_num[i + 3] && chars_to_num[i] != 1000) {
			cout << "wrong number";
			return 0;
		}
	}

	// check if I, X,  C are the only substractors
	for (int i = 0; i < sizeof(chars_to_num) / sizeof(chars_to_num[0]) - 1; i++) {
		if (chars_to_num[i] < chars_to_num[i + 1]) {
			if (chars_to_num[i] == 1 && chars_to_num[i + 1] != 5 || chars_to_num[i] == 1 && chars_to_num[i + 1] != 10) {
				cout << "Wrong number";
				return 0;
			}
			if (chars_to_num[i] == 10 && chars_to_num[i + 1] != 50 || chars_to_num[i] == 10 && chars_to_num[i + 1] != 100) {
				cout << "Wrong number";
				return 0;
			}
			if (chars_to_num[i] == 100 && chars_to_num[i + 1] != 500 || chars_to_num[i] == 100 && chars_to_num[i + 1] != 1000) {
				cout << "Wrong number";
				return 0;
			}
		}
	}

	// convert
	for (int i = 0; i < sizeof(chars_to_num) / sizeof(chars_to_num[0]) - 1; i++) {
		if (chars_to_num[i] >= chars_to_num[i + 1]) {
			converted += chars_to_num[i];
		}
		else if (chars_to_num[i] < chars_to_num[i + 1]) {
			converted += chars_to_num[i + 1] - chars_to_num[i];
			i++;
		}   
	}
	cout << converted;
	return 0;
}