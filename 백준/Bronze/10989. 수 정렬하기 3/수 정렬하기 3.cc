#include <iostream>

using namespace std;

int number[10001] = { 0, };

int main()
{
	ios::sync_with_stdio(false);

	int N, x;
	
	cin >> N;
	if (N < 1 || N > 10000000) {
		cout << "1 <= N <= 10,000,000";
		return 0;
	}
	for (int i = 0; i < N; i++) {
		cin >> x;
		if (x > 10000 || x < 1) {
			cout << "10,000보다 작거나 같은 자연수";
			return 0;
		}
		number[x]++;
	}
	for (int i = 1; i < 10001; i++) {
		for (int j = 0; j < number[i]; j++) {
			cout << i << "\n";
		}
	}

	return 0;
}