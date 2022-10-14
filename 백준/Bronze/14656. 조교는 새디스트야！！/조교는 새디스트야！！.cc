#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int N = 0, student = 0, cnt = 0;

	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> student;
		if (student != i) {
			cnt++;
		}
	}
	cout << cnt;

	return 0;
}