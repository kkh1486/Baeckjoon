#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, K = 0, change = 0, max = 0;
	string str;

	cin >> N >> K;
	for (int i = 1; i <= K; i++) {
		str = to_string(N * i);
		reverse(str.begin(), str.end());
		change = stoi(str);
		if (change > max) {
			max = change;
		}
	}
	cout << max;

	return 0;
}