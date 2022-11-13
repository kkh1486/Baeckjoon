#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int month = 0, day = 0;

	cin >> month;
	cin >> day;
	if (month == 2) {
		if (day == 18) {
			cout << "Special";
		}
		else if (day < 18) {
			cout << "Before";
		}
		else {
			cout << "After";
		}
	}
	else if (month < 2) {
		cout << "Before";
	}
	else {
		cout << "After";
	}

	return 0;
}