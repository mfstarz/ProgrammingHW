#include <iostream>

using namespace std;

int main() {
	// bx + c = 0
	// bx = -c
	// x = -c/b
	setlocale(LC_ALL, "Russian");
	float b;
	float c;
	cout << "¬ведите b: \n";
	cin >> b;
	cout << "¬ведите c: \n";
	cin >> c;
	if (b == 0 && c == 0) {
		cout << "X - Ћюбое число";
		return 0;
	}
	if (b == 0) {
		cout << "”равнение не имеет смысла";
		return 0;
	}
	float answer = (-1 * c) / b;
	if (answer == -0) {
		answer = 0;
	}
	cout << "–ешение: x = " <<  answer;
	return 0;
}