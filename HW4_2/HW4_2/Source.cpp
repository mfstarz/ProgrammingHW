#include <iostream>

using namespace std;

int sign(float input) {
	if (input > 0) {
		return 1;
	}
	else if (input < 0) {
		return -1;
	}
	else {
		return 0;
	}
}

int main() {
	setlocale(LC_ALL, "Russian");
	float num;
	cout << "������� �����: ";
	cin >> num;
	cout << "����: " << sign(num);
	return 0;
}