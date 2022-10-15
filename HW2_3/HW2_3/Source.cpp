#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	float x, y, b, z;
	cout << "Введите x: ";
	cin >> x;
	cout << "Введите y: ";
	cin >> y;
	cout << "Введите b: ";
	cin >> b;
	if (b - y > 0 && b - x >= 0) {
		z = log(b - y) * sqrt(b - x);
		cout << "z = " << z;
		return 0;
	}
	cout << "Нельзя выполнить одно из следующих действий: ln(" << b - y << ") или sqrt(" << b - x << ").";
	return 0;
}