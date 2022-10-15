#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	float s, p, n, m, r;
	cout << "Введите S: ";
	cin >> s;
	cout << "Введите p: ";
	cin >> p;
	cout << "Введите n: ";
	cin >> n;
	if (s == 0 || n == 0) {
		cout << "Нельзя взять кредит на 0р или 0 лет";
		return 0;
	}
	if (p == 0) {
		m = s / 12 * n;
		cout << "Результат: " << m;
		return 0;
	}
	r = p / 100;
	if ((12 * ((pow(1 + r, n) - 1))) == 0) {
		cout << "Результат: 0";
		return 0;
	}
	m = (s * r * pow((1 + r), n)) / (12 * ((pow(1 + r, n) - 1)));
	cout << "Результат: " << m;
	return 0;
}