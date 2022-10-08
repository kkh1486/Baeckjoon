#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0;
	long long fibo[46] = {};

	cin >> N;
	fibo[0] = 0;
	fibo[1] = 1;
	
	for (int i = 2; i <= N; i++) {
		fibo[i] = fibo[i - 1] + fibo[i - 2];
	}

	cout << fibo[N];

	return 0;
}