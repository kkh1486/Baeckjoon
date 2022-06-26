#include <iostream>

using namespace std;

int main()
{
	int a = 0, b = 0, c = 0;
	int max = 0, total = 0;

	cin >> a >> b >> c;
	if (a > 6 || a < 1 || b > 6 || b < 1 || c > 6 || c < 1) {
		cout << "1에서부터 6까지의 눈을 가진 3개의 주사위";
		return 0;
	}
	if (a == b && b == c) {
		total = 10000 + a * 1000;
	}
	else if (a == b || a == c || b == c) {
		if (b == c) {
			total = 1000 + b * 100;
		}
		else {
			total = 1000 + a * 100;
		}
	}
	else {
		if (a > b) {
			max = a;
			if (a < c) {
				max = c;
			}
		}
		else {
			max = b;
			if (b < c) {
				max = c;
			}
		}
		total = max * 100;
	}
	cout << total;

	return 0;
}