#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	string a = "File.txt";
	ofstream Output;
	ifstream Input;
	Output.open(a);
	cout << "¬ведите 10 чисел: " << endl;
	string b;
	getline(cin, b);
	Output << b;
	Output.close();
	Input.open(a);
	if (!Input.is_open()) {
		cout << "ќшибка" << endl;
		return 0;
	}
	else {
		float S1, S2 = 0;
		while (Input >> S1)
		{
			S2 = S2 + S1;
		}
		Input.close();
		cout << S2;
	}
	return 0;
}