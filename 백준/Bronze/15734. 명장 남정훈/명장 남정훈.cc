#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int L = 0, R = 0, A = 0, result = 0;

	cin >> L >> R >> A;
	if (L == R) {
		result = (L + A / 2) * 2;
	}
	else if (L < R) {
		if (L + A <= R) {
			result = (L + A) * 2;
		}
		else {
			result = (R + (A - (R - L)) / 2) * 2;
		}
	}
	else {
		if (R + A <= L) {
			result = (R + A) * 2;
		}
		else {
			result = (L + (A - (L - R)) / 2) * 2;
		}
	}
	cout << result;

	return 0;
}