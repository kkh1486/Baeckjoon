#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N = 0;
	
	cin >> N;
	if (N > 100000) {
		cout << "(N <= 100,000)";
		return 0;
	}
	for (int i = N; i > 0; i--) {
		cout << i << "\n";
	}

	return 0;
}