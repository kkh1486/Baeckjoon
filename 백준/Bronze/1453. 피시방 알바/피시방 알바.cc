#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, cnt = 0, customer = 0;
	int position[100] = { 0, };

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> customer;
		if (position[customer] == 1) {
			cnt++;
		}
		else {
			position[customer] = 1;
		}
	}
	cout << cnt;

	return 0;
}