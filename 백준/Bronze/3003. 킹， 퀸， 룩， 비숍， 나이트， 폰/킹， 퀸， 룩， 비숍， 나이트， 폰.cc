#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int x = 0;
	int chess[6] = { 1, 1, 2, 2, 2, 8 };

	for (int i = 0; i < 6; i++) {
		cin >> x;
		chess[i] -= x;
	}
	for (int i = 0; i < 6; i++) {
		cout << chess[i] << " ";
	}

	return 0;
}