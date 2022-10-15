#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	float a, b;
	cout << "Введите число 1: ";
	cin >> a;
	cout << "Введите число 2: ";
	cin >> b;
	if (b == 0) {
		cout << "Сумма: " << a << "\nРазность: " << a << "\nПроизведение: 0\nДелить на 0 нельзя!";
		return 0;
	}
	float sum, diff, mult, divis;
	sum = a + b;
	diff = a - b;
	mult = a * b;
	divis = a / b;
	cout << "Сумма: " << sum << "\nРазность: " << diff << "\nПроизведение:" << mult << "\nЧастное: " << divis;
	return 0;
}