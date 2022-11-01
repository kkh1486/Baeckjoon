#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int T = 0;
	string x;
	float sum = 0;

	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> sum;
		getline(cin, x);
		for (int j = 0; j < x.length(); j++) {
			switch (x[j]) {
				case '@':
					sum *= 3;
					break;
				case '%':
					sum += 5;
					break;
				case '#':
					sum -= 7;
			}
		}

		printf("%0.2f\n", sum);
	}

	return 0;
}