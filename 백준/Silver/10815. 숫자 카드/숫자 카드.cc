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
	int *s_card = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> s_card[i];
	}
	sort(s_card, s_card + N);
	cin >> M;
	int* c_card = new int[M];
	for (int i = 0; i < M; i++) {
		cin >> c_card[i];
	}
	for (int i = 0; i < M; i++) {
		low = 0;
		high = N - 1;
		while (low <= high) {
			mid = (low + high) / 2;
			if (s_card[mid] == c_card[i]) {
				flag = 1;
				break;
			}
			else if (s_card[mid] > c_card[i]) {
				high = mid - 1;
			}
			else {
				low = mid + 1;
			}
		}
		cout << flag << " ";
		flag = 0;
	}

	return 0;
}