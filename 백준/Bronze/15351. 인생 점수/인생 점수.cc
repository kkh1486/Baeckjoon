#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, sum = 0;
	string str;

	cin >> N;
	getline(cin, str);
	for (int i = 0; i < N; i++) {
		getline(cin, str);

		for (int j = 0; j < str.length(); j++) {
			if (str[j] == ' ') {
				continue;
			}
			else {
				sum += (int)str[j] - 64;
			}
		}

		if (sum == 100) {
			cout << "PERFECT LIFE\n";
		}
		else {
			cout << sum << "\n";
		}
		sum = 0;
	}

	return 0;
}