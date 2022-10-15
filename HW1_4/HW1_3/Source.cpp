#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	float a, b, c;
	cout << "Введите a: \n";
	cin >> a;
	cout << "Введите b: \n";
	cin >> b;
	cout << "Введите c: \n";
	cin >> c;
	if (a == 0 && b == 0 && c == 0) {
		cout << "x - любое число";
		return 0;
	}
	if (a == 0) {
		float answer = (-1 * c) / b;
		if (answer == -0) {
			answer = 0;
		}
		cout << "Результат: x = " << answer;
		return 0;
	}
	float disc = b * b - 4 * a * c;
	if (disc < 0) {
		cout << "Комплексные корни";
		return 0;
	}
	if (disc == 0) {
		float answer = (-1 * b + sqrt(disc)) / (2 * a);
		cout << "Результат: x = " << answer;
		return 0;
	}
	float answer1 = (-1 * b + sqrt(disc)) / (2 * a);
	float answer2 = (-1 * b - sqrt(disc)) / (2 * a);
	cout << "Результат: x1 = " << answer1 << "; x2 = " << answer2;
	return 0;
}