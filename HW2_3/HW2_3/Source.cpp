#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	float x, y, b, z;
	cout << "������� x: ";
	cin >> x;
	cout << "������� y: ";
	cin >> y;
	cout << "������� b: ";
	cin >> b;
	if (b - y > 0 && b - x >= 0) {
		z = log(b - y) * sqrt(b - x);
		cout << "z = " << z;
		return 0;
	}
	cout << "������ ��������� ���� �� ��������� ��������: ln(" << b - y << ") ��� sqrt(" << b - x << ").";
	return 0;
}