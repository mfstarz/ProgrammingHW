#include <iostream>
#include <cmath>

using namespace std;

int main() {
	float a, x, w;
	setlocale(LC_ALL, "Russian");
	cout << "Введите а: ";
	cin >> a;
	cout << "Введите x: ";
	cin >> x;
	if (abs(x) < 1) {
		if (x == 0) {
			cout << "Невозможно вычесть логарифм.";
			return 0;
		}
		w = a * log(abs(x));
	}
	if (abs(x) >= 1) {
		if (a - x * x < 0) {
			cout << "Невозможно вычесть корень из " << a - x * x;
			return 0;
		}
		w = sqrt(a - x * x);
	}
	cout << "w = " << w;
	return 0;
}