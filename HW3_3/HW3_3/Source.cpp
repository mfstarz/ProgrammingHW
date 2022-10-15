#include <iostream>
#include <fstream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	ifstream text("Текст.txt");
	cout << text.rdbuf();
	return 0;
}