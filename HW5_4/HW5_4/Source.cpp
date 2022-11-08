#include "iostream"
#include "cmath"

using namespace std;

int factorial(int i) {
	{
		int result = 1;
		for (int j = 1; j <= i; j++)
		{
			result *= j;
		}
		return result;
	}
}

int main()
{
	int n;
	double sum = 0;
	double sinSum = 0;

	cout << "Enter a number: ";
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		sinSum += sin(i);
		sum += i / sinSum;
	}

	cout << "5.4.1: " << sum << endl;
	
	sum = 1;
	sinSum = 0;
	
	for (int i = 1; i <= n; i++)
	{
		sinSum += sin(2 * i);
		sum *= factorial(i) / sinSum;
	}
	
	cout << "5.4.3: " << sum << endl;

	return 0;
}