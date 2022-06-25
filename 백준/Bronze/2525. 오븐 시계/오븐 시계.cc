#include <iostream>

using namespace std;

int main()
{
	int A = 0, B = 0, C = 0;

	cin >> A >> B;
	cin >> C;
	if (A > 23 || A < 0 || B > 59 || B < 0 || C > 1000 || C < 0) {
		cout << "A(0 <= A <= 23), B(0 <= B <= 59), C(0 <= C <= 1000)";
		return 0;
	}
	B += C;
	if (B > 59) {
		A += B / 60;
		B %= 60;
	}
	A %= 24;
	cout << A << " " << B;

	return 0;
}