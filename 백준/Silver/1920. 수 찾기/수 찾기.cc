#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int N = 0, M = 0, low = 0, high = 0, mid = 0, flag = 0;
	
	cin >> N;
	int *A = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	sort(A, A + N);
	cin >> M;
	int* B = new int[M];
	for (int i = 0; i < M; i++) {
		cin >> B[i];
	}
	for (int i = 0; i < M; i++) {
		low = 0;
		high = N - 1;
		while (low <= high) {
			mid = (low + high) / 2;
			if (A[mid] == B[i]) {
				flag = 1;
				break;
			}
			else if (A[mid] > B[i]) {
				high = mid - 1;
			}
			else {
				low = mid + 1;
			}
		}
		cout << flag << "\n";
		flag = 0;
	}

	return 0;
}