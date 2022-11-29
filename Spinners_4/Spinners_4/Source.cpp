#include <iostream>

using namespace std;

int coupe_num(int k) {
	if (k <= 36) {
		return (k - 1) / 4;
	}
	else {
		return 8 - (k - 37) / 2;
	}
}

int main() {
	int countx[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int n;
	cout << "Enter n: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		int k;
		cin >> k;
		countx[coupe_num(k)]++;
	}
	int ans = 0;
	int curr = 0;
	for (int i = 0; i < 9; i++) {
		if (countx[i] == 6) {
			curr += 1;
			ans = max(ans, curr);
		}
		else {
			curr = 0;
		}
	}
	cout << ans;
	return 0;
}