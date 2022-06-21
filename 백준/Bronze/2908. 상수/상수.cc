#include <iostream>

using namespace std;

int main()
{
	int A, B, rA, rB, result = 0;
	int reverse1[3] = {};
	int reverse2[3] = {};

	cin >> A >> B;
	if (A == B || A < 100 || A >= 1000 || B < 100 || B >= 1000) {
		cout << "두 수는 같지 않은 세 자리 수";

		return 0;
	}

	if (A % 10 == 0 || B % 10 == 0 || A % 100 == 0 || B % 100 == 0) {
		cout << "두 수는 0이 포함되어 있지 않다.";

		return 0;
	}
	for (int i = 0; i < 3; i++) {
		reverse1[i] = A % 10;
		reverse2[i] = B % 10;
		A /= 10;
		B /= 10;
	}
	rA = reverse1[0] * 100 + reverse1[1] * 10 + reverse1[2];
	rB = reverse2[0] * 100 + reverse2[1] * 10 + reverse2[2] ;
	result = (rA > rB) ? rA : rB;
	cout << result;

	return 0;
}