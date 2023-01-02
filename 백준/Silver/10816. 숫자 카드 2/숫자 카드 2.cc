#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int N = 0, M = 0, ncard = 0, cnt = 0;

	cin >> N;
	int* S = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> S[i];
	}
	sort(S, S + N);

	cin >> M;
	int* H = new int[M];
	for (int i = 0; i < M; i++) {
		cin >> ncard;
		cout << upper_bound(S, S + N, ncard) - lower_bound(S, S + N, ncard) << " ";
	}

	return 0;
}