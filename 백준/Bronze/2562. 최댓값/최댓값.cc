#include <iostream>

using namespace std;

int main()
{
	int max = 0, index = 0;
	int N[9];

	for (int i = 0; i < 9; i++) {
		cin >> N[i];
		if (N[i] > max) {
			max = N[i];
			index = i + 1;
		}
	}
	cout << max << endl << index;

	return 0;
}