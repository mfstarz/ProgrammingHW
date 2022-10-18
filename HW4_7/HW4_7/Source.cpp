#include <iostream>

using namespace std;

void randint_1(float amount) {
	amount++;
	int m = 37;
	int b = 3;
	int c = 64;
	int s = 0;

	while (--amount) {
		s = (m * s + b) % c;
		cout << s << "\n";
	}
}

void randint_2(float amount) {
	amount++;
	int m = 25173;
	int b = 13849;
	int c = 65537;
	int s = 0;

	while (--amount) {
		s = (m * s + b) % c;
		cout << s << "\n";
	}
}

int main() {
	randint_1(5);
	randint_2(5);
	return 0;
}