#include <iostream>

using namespace std;

int main()
{
	int A, B;

	cin >> A >> B;
	if (A > 10000 || A < -10000 || B > 10000 || B < -10000) {
		cout << "-10,000 <= A, B <= 10,000";
		return 0;
	}
	else if (A > B) {
		cout << ">";
	}
	else if (A == B) {
		cout << "==";
	}
	else {
		cout << "<";
	}

	return 0;
}