#include <iostream>

using namespace std;

int main()
{
	int N = 0;

	cin >> N;
	if (N > 9 || N < 1) {
		cout << "1 <= N <= 9";
		return 0;
	}
	for (int i = 0; i < 9; i++) {
		cout << N << " * " << i + 1 << " = " << N * (i + 1) << "\n";
	}

	return 0;
}