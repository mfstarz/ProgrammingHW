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

int main()
{
	string input_s;
	cout << "Enter a number: ";
	cin >> input_s;
	if (!string_is_number(input_s)) {
		cout << "Enter a number...";
		return 0;
	}
	int input = stoi(input_s);
	cout << "Prime numbers between 2 and " << input << " are: " << endl;
	for (int i = 2; i <= input; i++)
	{
		bool isPrime = true;
		for (int j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				isPrime = false;
				break;
			}
		}
		if (isPrime)
			cout << i << " ";
	}
	cout << endl;
	return 0;
}