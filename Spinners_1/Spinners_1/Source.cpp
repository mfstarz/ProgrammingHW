#include <iostream>

using namespace std;

int main() {
	int a, b, c;
	cout << "Enter a: ";
	cin >> a;
	cout << "Enter b: ";
	cin >> b;
	cout << "Enter c: ";
	cin >> c;
	int n = 0;
	while (a + b * n <= c) {
		n = n + 1;
	}
	cout << n - 1;
	return 0;
}