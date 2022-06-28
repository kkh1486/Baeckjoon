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
		for (int j = 1; j < N - i; j++) {
			cout << " ";
		}
		for (int k = 0; k < i + 1; k++) {
			cout << "*";
		}
		cout << "\n";
	}

	return 0;
}