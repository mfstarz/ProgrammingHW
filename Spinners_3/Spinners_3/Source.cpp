#include <iostream>

using namespace std;

int main() {
	int n, m;
	cout << "Enter the number of rows: ";
	cin >> n;
	cout << "Enter the number of columns: ";
	cin >> m;
	cout << n * (n + 1) / 2 * m * (m + 1) / 2 << endl;
	return 0;
}