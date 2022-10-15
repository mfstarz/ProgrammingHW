#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	float r1, r2, h, l;
	cout << "������� ������ ������� ���������: ";
	cin >> r1;
	cout << "������� ������ �������� ���������: ";
	cin >> r2;
	cout << "������� ������: ";
	cin >> h;
	if (h == 0) {
		cout << "�����: 0\n������� �����������: 0";
		return 0;
	}
	if (r1 == 0 && r2 == 0) {
		cout << "�����: 0\n������� �����������: 0";
	}
	l = sqrt(h * h + (r1 - r2) * (r1 - r2));
	float Vol = ((1.0 / 3.0) * 3.1415 * h) * ((r1 * r1) + (r1 * r2) + (r2 * r2));
	float Surf = 3.1415 * (r1 * r1 + (r1 + r2) * l + r2 * r2);
	cout << "�����: " << Vol << "\n" << "������� �����������: " << Surf;
	return 0;
}