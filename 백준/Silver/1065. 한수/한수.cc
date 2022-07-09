#include <iostream>

using namespace std;

int hansu(int N)
{
	int cnt = 0;

	if (N < 100) {
		return N;
	}
	else {
		cnt = 99;
		
		for (int i = 100; i <= N; i++) {
			if (i % 10 - (i % 100) / 10 == (i % 100) / 10 - i / 100) {
				cnt++;
			}
		}
	}

	return cnt;
}

int main()
{
	int N = 0, result = 0;
	
	cin >> N;
	result = hansu(N);
	cout << result;

	return 0;
}