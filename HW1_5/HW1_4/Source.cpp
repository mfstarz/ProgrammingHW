#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	bool isDay, curtainsOpened, lampIsOn;
	cout << "������ ����? (1 - ��, 0 - ���)\n";
	cin >> isDay;
	cout << "����� �������? (1 - ��, 0 - ���)\n";
	cin >> curtainsOpened;
	cout << "����� ��������? (1 - ��, 0 - ���)\n";
	cin >> lampIsOn;
	if ((isDay && curtainsOpened) || lampIsOn) {
		cout << "� ������� ������!";
	}
	else {
		cout << "� ������� �����...";
	}
	return 0;
}