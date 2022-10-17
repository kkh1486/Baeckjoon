#include <iostream>

using namespace std;

int vip[1500001] = { 0, };

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int N = 0, K = 0, L = 0, s = 0, b = 0, d = 0, sum = 0, cnt = 0;

	cin >> N >> K >> L;
	for (int i = 0; i < N; i++) {
		cin >> s >> b >> d;
		sum = s + b + d;
		if (s >= L && b >= L && d >= L && sum >= K) {
			int j = cnt * 3;
			vip[j] = s;
			vip[j + 1] = b;
			vip[j + 2] = d;
			cnt++;
		}
	}
	cout << cnt << "\n";
	for (int i = 0; i < cnt * 3; i++) {
		cout << vip[i] << " ";
	}

	return 0;
}