#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0;

	cin >> N;
	if (N == 0) {
		cout << "YONSEI";
	}
	else {
		cout << "Leading the Way to the Future";
	}

	return 0;
}
