#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T = 0, data = 0,  sum = 0, min = 0;

	cin >> T;
	for (int i = 0; i < T; i++) {
		min = 100;
		sum = 0;
		for (int j = 0; j < 7; j++) {
			cin >> data;
			if (data % 2 == 0) {
				sum += data;
				if (data < min) {
					min = data;
				}
			}
		}
		cout << sum << " " << min << "\n";
	}

	return 0;
}