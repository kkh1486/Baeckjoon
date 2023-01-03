#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int T = 0, cnt = 0, sum = 0;
	int N[11] = { 0, };

	cin >> T;
	N[1] = 1;
	N[2] = 2;
	N[3] = 4;
	for (int i = 4; i < 11; i++) {
		N[i] = N[i - 1] + N[i - 2] + N[i - 3];
	}

	for (int i = 0; i < T; i++) {
		cin >> sum;
		cout << N[sum] << "\n";
	}

	return 0;
}