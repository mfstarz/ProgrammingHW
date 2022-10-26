#include <iostream>

int main() {
	int matrix_a[3][4] = { 
		{5, 2, 0, 10}, 
		{3, 5, 2, 5}, 
		{20, 0, 0, 0} };

	float matrtix_b[4][2] = { 
		{1.20, 0.5}, 
		{2.80, 0.4}, 
		{5, 1}, 
		{2, 1.5} };

	float matrix_c[3][2];

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			matrix_c[i][j] = matrix_a[i][j] * matrtix_b[i][j] + matrix_a[i][j+1] * matrtix_b[i+1][j] + matrix_a[i][j + 2] * matrtix_b[i + 2][j];
		}
	}
	return 0;
}