#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int N = 0, plug = 0, sum = 0;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> plug;
		sum += plug;
	}
	sum -= (N - 1);
	cout << sum;

	return 0;
}