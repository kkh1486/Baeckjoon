#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int a = 0, b = 0, c = 0, d = 0, result = 0, max = 0, flag = 0;

	for (int i = 1; i <= 5; i++) {
		cin >> a >> b >> c >> d;
		result = a + b + c + d;
		if (result > max) {
			max = result;
			flag = i;
		}
		result = 0;
	}
	cout << flag << " " << max;

	return 0;
}