#include <iostream>
#include <string>

using namespace std;

int main() {
	string input;
	string replacer;

	cout << "Enter a sentence: ";
	getline(cin, input);
	cout << "Enter a symbol: ";
	getline(cin, replacer);

	if (replacer.length() != 1) {
		cout << "Invalid symbol" << endl;
		return 0;
	}

	int start = 0;
	int end = 0;
	int maxStart = 0;
	int maxEnd = 0;
	int maxLen = 0;
	int len = 0;
	
	for (int i = 0; i < input.length(); i++) {
		if (input[i] == ' ') {
			end = i;
			len = end - start;
			if (len > maxLen) {
				maxLen = len;
				maxStart = start;
				maxEnd = end;
			}
			start = i + 1;
		}
	}

	end = input.length();
	len = end - start;
	if (len > maxLen) {
		maxLen = len;
		maxStart = start;
		maxEnd = end;
	}
	
	cout << "5.3.4: ";
	for (int i = maxStart; i < maxEnd; i++) {
		cout << input[i];
	}
	cout << endl;

	for (int i = 0; i < input.length(); i++) {
		if (input[i] == ' ') {
			input[i] = replacer[0];
		}
	}
	cout << "5.3.1: " << input << endl;
	return 0;
}