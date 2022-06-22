#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);

	long N, K;
	long A[5000000] = {};

	cin >> N >> K;
	if (N < 1 || N > 5000000 || K < 1 || K > N) {
		cout << "N(1 <= N <= 5,000,000), K(1 <= K <= N)";

		return 0;
	}
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	sort(A, A + N);
	cout << A[K - 1];

	return 0;
}