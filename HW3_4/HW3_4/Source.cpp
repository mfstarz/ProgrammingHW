#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	ifstream text_buff("Текст.txt");
	stringstream buffer;
	buffer << text_buff.rdbuf();
	string text_str = buffer.str();
	for (int i = 0; i < text_str.length(); i++) {
		if (isdigit(text_str[i])) {
			cout << text_str[i];
		}
	}
	return 0;
}