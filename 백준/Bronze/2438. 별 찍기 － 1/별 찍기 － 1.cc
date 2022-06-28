#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N = 0;
	
	cin >> N;
	if (N < 1 || N > 100) {
		cout << "N(1 <= N <= 100)";
		return 0;
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < i + 1; j++) {
			cout << "*";
		}
		cout << "\n";
	}

	return 0;
}