#include <iostream>
#include <fstream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	ifstream text("�����.txt");
	cout << text.rdbuf();
	return 0;
}