#include <iostream>

using namespace std;

int main()
{
	int n, max = 0;
	double grade[1000];
	double result = 0;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> grade[i];
		max = (max > grade[i]) ? max : grade[i];
	}
	for (int i = 0; i < n; i++) {
		grade[i] = grade[i] / max * 100;
		result += grade[i];
	}
	cout << fixed;
	cout.precision(6);
	cout << result / n;

	return 0;
}