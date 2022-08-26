#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int N = 0, cnt = 0, left = 0, right = 0;
	string number = "";

	cin >> N;
	number = to_string(N);
	cnt = number.length() / 2;
	for (int i = 0; i < cnt; i++) {
		right += (int)number[i];
		left += (int)number[i + cnt];
	}
	if (left == right) {
		cout << "LUCKY";
	}
	else {
		cout << "READY";
	}

	return 0;
}