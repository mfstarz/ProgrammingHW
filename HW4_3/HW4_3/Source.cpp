#include <iostream>
#include <cmath>

using namespace std;

float rectangle_area(float a, float b) {
	if (a <= 0 or b <= 0) {
		cout << "Error: any side can't be <= 0";
		return 0;
	}
	return a * b;
}

float triangle_area(float a, float b, float c) {
	if (a <= 0 or b <= 0 or c <= 0) {
		cout << "Error: any side can't be <= 0"; 
		return 0;
	}
	if (a + b > c && a + c > b && c + b > a) {
		float p = (a + b + c) / 2;
		return sqrt(p * (p - a) * (p - b) * (p - c));
	}
	else {
		cout << "Error: triangle doesn't exists... ";
		return 0;
	}
}

float circle_area(float r) {
	if (r <= 0) {
		cout << "Error: radius can't be <= 0";
		return 0;
	}
	return 3.141592  * pow(r, 2);
}

int main() {
	//cout << rectangle_area();
	cout << triangle_area(10, 20, 40);
	//cout << circle_area();
	return 0;
}