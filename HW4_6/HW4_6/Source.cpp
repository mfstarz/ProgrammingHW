#include <iostream>
#include <string>
#include <regex>

using namespace std;

bool is_valid_roman_number(string roman_num) {
	static const regex REGEX_VALID_ROMAN_NUMBER("^M{0,3}(CM|CD|D?C{0,3})(XC|XL|L?X{0,3})(IX|IV|V?I{0,3})$");
	return regex_match(roman_num, REGEX_VALID_ROMAN_NUMBER);
}

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
	char roman_number[] = "M";
	int chars_to_num[sizeof(roman_number)]{};
	int converted = 0;

	if (!is_valid_roman_number(roman_number)) {
		cout << "ERROR: Invalid Roman Number...";
		return 0;
	}

	// convert individual values
	for (int i = 0; i < sizeof(roman_number); i++) {
		chars_to_num[i] = romanToInt(roman_number[i]);
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