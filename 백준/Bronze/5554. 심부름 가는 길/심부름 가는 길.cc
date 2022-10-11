#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int d = 0, sum = 0;

	for (int i = 0; i < 4; i++) {
		cin >> d;
		sum += d;
	}
	cout << sum / 60 << "\n" << sum % 60;

	return 0;
}