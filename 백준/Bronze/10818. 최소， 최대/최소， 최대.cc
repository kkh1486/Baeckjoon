#include <iostream>

using namespace std;

int main()
{
	long N;
	long number[1000000] = {};

	cin >> N;
	if (N < 1 || N > 1000000) {
		cout << "N(1 <= N <= 1,000,000";
		
		return 0;
	}
	for (int i = 0; i < N; i++) {
		cin >> number[i];
		if (number[i] < -1000000 || number[i] > 1000000) {
			cout << "모든 정수는 -1,000,000보다 크거나 같고, 1,000,000보다 작거나 같은 정수이다.";

			return 0;
		}
	}
	long min = number[0], max = number[0];
	for (int i = 1; i < N; i++) {
		if (number[i] < min) {
			min = number[i];
		}
		else if (number[i] > max) {
			max = number[i];
		}
	}
	cout << min << " " << max;

	return 0;
}