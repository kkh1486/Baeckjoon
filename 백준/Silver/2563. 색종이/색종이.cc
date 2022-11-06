#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, x = 0, y = 0, cnt = 0;
	int drawing_paper[100][100] = { 0, };

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> x >> y;
		for (int j = y; j < y + 10; j++) {
			for (int k = x; k < x + 10; k++) {
				if (drawing_paper[k][j] != 1) {
					cnt++;
					drawing_paper[k][j] = 1;
				}
			}
		}
	}
	cout << cnt;

	return 0;
}