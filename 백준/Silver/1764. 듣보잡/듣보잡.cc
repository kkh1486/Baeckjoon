#include <iostream>
#include <algorithm>

using namespace std;
string str[1000000];
string db[500000];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int N = 0, M = 0, cnt = 0;
	string d, b;

	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> d;
		str[i] = d;
	}
	for (int i = N; i < N + M; i++) {
		cin >> b;
		str[i] = b;
	}
	sort(str, str + N + M);
	for (int i = 1; i < N + M; i++) {
		if (str[i] == str[i - 1]) {
			cnt++;
			db[cnt - 1] = str[i];
		}
	}
	cout << cnt << "\n";
	for (int i = 0; i < cnt; i++) {
		cout << db[i] << "\n";
	}

	return 0;
}