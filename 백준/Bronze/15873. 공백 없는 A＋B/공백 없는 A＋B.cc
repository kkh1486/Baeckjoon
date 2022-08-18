#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int x = 0, A = 0, B = 0;

	cin >> x;
	if (x / 10000 == 1) {
		A = 10;
		B = 10;
	}
	else if (x / 100 == 0) {
		A = x / 10;
		B = x % 10;
	}
	else if (x % 10 == 0) {
		A = x / 100;
		B = 10;
	}
	else {
		A = 10;
		B = x % 10;
	}
	cout << A + B;

	return 0;
}