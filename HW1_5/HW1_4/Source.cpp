#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	bool isDay, curtainsOpened, lampIsOn;
	cout << "Сейчас день? (1 - да, 0 - нет)\n";
	cin >> isDay;
	cout << "Шторы открыты? (1 - да, 0 - нет)\n";
	cin >> curtainsOpened;
	cout << "Лампа включена? (1 - да, 0 - нет)\n";
	cin >> lampIsOn;
	if ((isDay && curtainsOpened) || lampIsOn) {
		cout << "В комнате светло!";
	}
	else {
		cout << "В комнате темно...";
	}
	return 0;
}