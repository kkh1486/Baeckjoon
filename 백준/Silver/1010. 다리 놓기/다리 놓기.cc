#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);

	int N, M, T, n = 1;
	long long int result = 1;

	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> N >> M;
		if (M < N || M >= 30 || M <= 0 || N >= 30 || N <= 0) {
			cout << "N, M (0 < N <= M < 30)";
			return 0;
		}
		for (int j = M; j > M - N; j--) {
			result *= j;
			result /= n++;
		}
		cout << result << "\n";
		result = 1;
		n = 1;
	}

	return 0;
}