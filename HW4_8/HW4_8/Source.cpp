#include <iostream>

int main() {
	int i, j, k;

	float matrix1[3][4] = {
		{5, 2, 0 ,10},
		{3, 5, 2, 5},
		{20, 0, 0, 0}
	};

	float matrix2[4][2] = {
		{1.20, 0.5},
		{2.8, 0.4},
		{5, 1},
		{2, 1.5}
	};

	float matrix3[3][2];

	for (i = 0; i < 3; ++i)
		for (j = 0; j < 2; ++j)
		{
			matrix3[i][j] = 0;
		}

	for (i = 0; i < 3; ++i)
		for (j = 0; j < 2; ++j)
			for (k = 0; k < 4; ++k)
			{
				matrix3[i][j] += matrix1[i][k] * matrix2[k][j];
			}

	for (i = 0; i < 3; ++i)
		for (j = 0; j < 2; ++j)
		{
			std::cout << " " << matrix3[i][j];
			if (j == 2 - 1)
				std::cout << std::endl;
		}

	float first_seller_earned = matrix3[0][0];
	float second_seller_earned = matrix3[1][0];
	float third_seller_earned = matrix3[2][0];
	float first_seller_commision = matrix3[0][1];
	float second_seller_commision = matrix3[1][1];
	float third_seller_commision = matrix3[2][1];

	if (first_seller_earned > second_seller_earned) {
		if (second_seller_earned > third_seller_earned) {
			std::cout << "First seller earned most: " << first_seller_earned;
		}
	}
	else if (second_seller_earned > first_seller_earned) {
		if (second_seller_earned > third_seller_earned) {
			std::cout << "Second seller earned most: " << second_seller_earned;
		}
		else {
			std::cout << "Third seller earned most: " << third_seller_earned;
		}
	}

	std::cout << std::endl;

	if (first_seller_commision > second_seller_commision) {
		if (second_seller_commision > third_seller_commision) {
			std::cout << "First seller has most commision: " << first_seller_commision;
		}
	}
	else if (second_seller_commision > first_seller_commision) {
		if (second_seller_commision > third_seller_commision) {
			std::cout << "Second seller has most commision: " << second_seller_commision;
		}
		else {
			std::cout << "Third seller has most commision: " << third_seller_commision;
		}
	}

	std::cout << std::endl;

	std::cout << "Total sells: " << first_seller_earned + second_seller_earned + third_seller_earned;

	std::cout << std::endl;

	std::cout << "Total commisions: " << first_seller_commision + second_seller_commision + third_seller_commision;

	std::cout << std::endl;

	std::cout << "Total money: " << first_seller_commision + second_seller_commision + third_seller_commision + first_seller_earned + second_seller_earned + third_seller_earned;
	return 0;
}