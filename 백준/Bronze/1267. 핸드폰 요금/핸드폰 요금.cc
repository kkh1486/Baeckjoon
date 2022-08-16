#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, time = 0, Y = 0, M = 0;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> time;
		Y += (time / 30 + 1) * 10;
		M += (time / 60 + 1) * 15;
	}
	if (Y == M) {
		cout << "Y M " << Y;
	}
	else if (Y < M) {
		cout << "Y " << Y;
	}
	else {
		cout << "M " << M;
	}

	return 0;
}