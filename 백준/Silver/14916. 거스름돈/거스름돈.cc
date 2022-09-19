#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n = 0, two_won = 0, five_won = 0, remainder = 0;

	cin >> n;
	five_won = n / 5;
	remainder = n % 5;
	while (remainder > 0) {
		if (five_won < 1 && remainder % 2 != 0) {
			break;
		}
		if (remainder % 2 == 0) {
			two_won += remainder / 2;
			remainder = 0;
		}
		else {
			five_won--;
			remainder += 5;
		}
	}
	if (remainder == 0) {
		cout << five_won + two_won;
	}
	else {
		cout << -1;
	}

	return 0;
}