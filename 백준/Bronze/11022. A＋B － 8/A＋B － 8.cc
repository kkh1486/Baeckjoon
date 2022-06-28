#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T = 0, A = 0, B = 0;
	
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> A >> B;
		if (A <= 0 || A >= 10 || B <= 0 || B >= 10) {
			cout << "(0 < A, B < 10)";
			return 0;
		}
		cout << "Case #" << i + 1 << ": " << A << " + " << B << " = " << A + B << "\n";
	}

	return 0;
}