#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	long long T = 0, s = 0, n = 0, p = 0, q = 0;

	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> s;
		cin >> n;
		for (int j = 0; j < n; j++) {
			cin >> p >> q;
			s += p * q;
		}
		cout << s << "\n";
	}

	return 0;
}