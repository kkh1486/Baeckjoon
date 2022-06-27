#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);

	int n = 0;
	
	cin >> n;
	if (n < 1 || n > 10000) {
		cout << "(1 <= n <= 10,000)";
		return 0;
	}
	cout << n * (n + 1) / 2;

	return 0;
}