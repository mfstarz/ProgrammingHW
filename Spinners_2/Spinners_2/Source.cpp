#include <iostream>

using namespace std;

int main() {
	int m, n3, n4;
	cout << "Enter m: ";
	cin >> m;
	
	n4 = m % 3;
	n3 = (m - 4 * n4) / 3;
	if (n3 >= 0) {
		cout << n3 << " " << n4;
	}
	else {
		cout << 0;
	}
	return 0;
}