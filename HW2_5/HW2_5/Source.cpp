#include <iostream>

using namespace std;

float y(float x) {
	return (x * x - 2 * x + 2) / (x - 1);
}

int main() {
	setlocale(LC_ALL, "Russian");
	for (float i = -4; i <= 4; i += 0.5) {
		if (i == 1) {
			cout << "X = 1 | Y = Не существует\n";
		}
		else {
			cout << "X = " << i << " | Y = " << y(i) << "\n";
		}
	}
	return 0;
}