#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int input = 0, output = 0, max = 0, result = 0;

	for (int i = 1; i <= 4; i++) {
		cin >> output >> input;
		result = result - output + input;
		if (result > max) {
			max = result;
		}
	}
	cout << max;

	return 0;
}