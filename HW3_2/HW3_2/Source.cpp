#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	//1200 1200 1 != 0
	setlocale(LC_ALL, "Russian");
	float s, m, n, r, m2;
	cout << "Введите S: ";
	cin >> s;
	if (s <= 0) {
		cout << "Нельязя взять кредит на <= 0р.";
		return 0;
	}
	cout << "Введите M: ";
	cin >> m;
	if (m == 0) {
		cout << "P = 0";
		return 0;
	}
	cout << "Введите N: ";
	cin >> n;
	if (n <= 0) {
		cout << "Нельзя взять кредит на <= 0 лет.";
		return 0;
	}
	for (float p = 0; p < 100; p++) {
		r = p / 100;
		if (p == 0) {
			m2 = 0;
		}
		m2 = (s * r * pow((1 + r), n)) / (12 * ((pow(1 + r, n) - 1)));
		m = round(m * 1000) / 1000;
		m2 = round(m2 * 1000) / 1000;
		if (p == 0) {
			m2 = m;
		}
		//cout << setprecision(10) << m << " | " << m2 << " | " << p << "\n";
		if (m == m2) {
			cout << "P = " << p;
			return 0;
		}
	}
	return 0;
}