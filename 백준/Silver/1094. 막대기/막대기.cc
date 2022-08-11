#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int X = 0, cnt = 0, stick = 64, sum = 0;

	cin >> X;
	while (X != sum) {
		if (stick + sum > X) {
			stick /= 2;
			continue;
		}
		sum += stick;
		cnt++;
		stick /= 2;
	}
	cout << cnt;

	return 0;
}