#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	float a, b;
	cout << "������� ����� 1: ";
	cin >> a;
	cout << "������� ����� 2: ";
	cin >> b;
	if (b == 0) {
		cout << "�����: " << a << "\n��������: " << a << "\n������������: 0\n������ �� 0 ������!";
		return 0;
	}
	float sum, diff, mult, divis;
	sum = a + b;
	diff = a - b;
	mult = a * b;
	divis = a / b;
	cout << "�����: " << sum << "\n��������: " << diff << "\n������������:" << mult << "\n�������: " << divis;
	return 0;
}