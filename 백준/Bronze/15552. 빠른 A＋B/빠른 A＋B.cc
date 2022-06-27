#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T = 0, A = 0, B = 0;
	
	cin >> T;
	if (T > 1000000) {
		cout << "(T > 1,000,000)";
		return 0;
	}
	for (int i = 0; i < T; i++) {
		cin >> A >> B;
		cout << A + B << "\n";
	}

	return 0;
}