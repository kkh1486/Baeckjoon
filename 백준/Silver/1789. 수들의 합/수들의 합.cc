#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	long long S = 0, sum = 0, num = 1;
	int N = 0;

	cin >> S;
	while (1) {
		sum += num;
		N++;
		if (sum > S) {
			N--;
			break;
		}
		num++;
	}
	cout << N;

	return 0;
}