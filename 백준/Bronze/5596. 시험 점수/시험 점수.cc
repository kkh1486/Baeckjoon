#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int x = 0, S = 0, T = 0;

	for (int i = 0; i < 4; i++) {
		cin >> x;
		S += x;
	}
	for (int i = 0; i < 4; i++) {
		cin >> x;
		T += x;
	}
	if (S >= T) {
		cout << S;
	}
	else {
		cout << T;
	}
	
	return 0;
}