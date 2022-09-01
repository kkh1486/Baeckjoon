#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int N = 0, K = 0, cnt = 0;

	cin >> N >> K;
	int *A = new int[N + 1];
	A[0] = 0;
	for (int i = 1; i <= N; i++) {
		cin >> A[i];
	}
	for (int i = N; K != 0; i--) {
		if (K / A[i] > 0) {
			cnt += K / A[i];			
			K %= A[i];
		}
	}
	cout << cnt;

	return 0;
}