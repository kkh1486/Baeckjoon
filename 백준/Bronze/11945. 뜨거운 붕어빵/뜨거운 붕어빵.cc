#include <iostream>

using namespace std;

char arr[10][10];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

	int N, M;

	cin >> N >> M;
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < M; ++j) {
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < N; ++i) {
		for (int j = M - 1; j >= 0; --j)
			cout << arr[i][j];
		cout << '\n';
	}

	return 0;
}