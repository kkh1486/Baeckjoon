#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int N = 0, X = 0, Y = 0;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> X >> Y;
		if (X < Y) {
			cout << "NO BRAINS\n";
		}
		else if (X >= Y) {
			cout << "MMM BRAINS\n";
		}
	}

	return 0;
}