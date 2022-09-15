#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int sum = 0;
	string number = "";

	cin >> number;
	sort(number.begin(), number.end(), greater<>());
	for (int i = 0; i < number.length() - 1; i++) {
		sum += number[i] - '0';
	}
	if ( sum % 3 == 0 && number[number.length() - 1] == '0') {
		cout << number << "\n";
	}
	else {
		cout << -1 << "\n";
	}

	return 0;
}