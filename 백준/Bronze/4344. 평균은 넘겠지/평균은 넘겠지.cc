#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int C = 0, N = 0, mean, cnt;
	int grade[1000] = { 0, };
	double result = 0;

	cin >> C;
	for (int i = 0; i < C; i++) {
		mean = 0, cnt = 0;
		cin >> N;
		for (int j = 0; j < N; j++) {
			cin >> grade[j];
			mean += grade[j];
		}
		mean /= N;
		for (int j = 0; j < N; j++) {
			if (grade[j] > mean) {
				cnt++;
			}
		}
		result = (double)cnt / N * 100;
		cout << fixed;
		cout.precision(3);
		cout << result << "%" << "\n";
	}
	
	return 0;
}