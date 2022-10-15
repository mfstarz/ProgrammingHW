#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "¬ведите N: ";
	cin >> n;
	for (int i = n; i < n + 10; i++) {
		cout << i << "\n";
	}
	return 0;
}