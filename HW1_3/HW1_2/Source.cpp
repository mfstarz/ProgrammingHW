#include <iostream>

using namespace std;

int main() {
	// bx + c = 0
	// bx = -c
	// x = -c/b
	setlocale(LC_ALL, "Russian");
	float b;
	float c;
	cout << "������� b: \n";
	cin >> b;
	cout << "������� c: \n";
	cin >> c;
	if (b == 0 && c == 0) {
		cout << "X - ����� �����";
		return 0;
	}
	if (b == 0) {
		cout << "��������� �� ����� ������";
		return 0;
	}
	float answer = (-1 * c) / b;
	if (answer == -0) {
		answer = 0;
	}
	cout << "�������: x = " <<  answer;
	return 0;
}