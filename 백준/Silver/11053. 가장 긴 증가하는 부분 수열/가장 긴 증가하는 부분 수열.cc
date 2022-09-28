#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int  N = 0, result = 0;
	
	cin >> N;
	int* A = new int[N + 1];
	int* dp = new int[N + 1];
	for (int i = 1; i <= N; i++) {
		cin >> A[i];
	}
	for (int i = 1; i <= N; i++) {
		dp[i] = 1;
		for (int j = i - 1; j >= 1; j--) {
			if (A[i] > A[j]) {
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
		result = max(dp[i], result);
	}
	cout << result << "\n";

	return 0;
}