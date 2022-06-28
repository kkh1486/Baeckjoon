#include <iostream>

using namespace std;

int A[10000] = { 0, };

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N = 0, X = 0;

	
	cin >> N >> X;

	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	for (int i = 0; i < N; i++) {
		if (A[i] < X) {
			cout << A[i] << " ";
		}
	}
	
	return 0;
}