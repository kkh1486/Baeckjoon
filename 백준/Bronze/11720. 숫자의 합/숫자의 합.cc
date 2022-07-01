#include <iostream>

using namespace std;

int main()
{
	int n = 0, sum = 0;
	char number;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> number;
		sum += number - '0';
	}
	cout << sum;

	return 0;
}