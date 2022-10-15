#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	float r1, r2, h, l;
	cout << "Введите радиус нижнего основания: ";
	cin >> r1;
	cout << "Введите радиус верхнего основания: ";
	cin >> r2;
	cout << "Введите высоту: ";
	cin >> h;
	if (h == 0) {
		cout << "Объем: 0\nПлощадь поверхности: 0";
		return 0;
	}
	if (r1 == 0 && r2 == 0) {
		cout << "Объем: 0\nПлощадь поверхности: 0";
	}
	l = sqrt(h * h + (r1 - r2) * (r1 - r2));
	float Vol = ((1.0 / 3.0) * 3.1415 * h) * ((r1 * r1) + (r1 * r2) + (r2 * r2));
	float Surf = 3.1415 * (r1 * r1 + (r1 + r2) * l + r2 * r2);
	cout << "Объем: " << Vol << "\n" << "Площадь поверхности: " << Surf;
	return 0;
}