#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int x = 0, y = 0, w = 0, h = 0, min = 0;

	cin >> x >> y >> w >> h;
	if (w - x < x) {
		min = w - x;
		if (h - y < y && h - y < min) {
			min = h - y;
		}
		else if (y < h - y && y < min) {
			min = y;
		}
	}
	else {
		min = x;
		if (h - y < y && h - y < min) {
			min = h - y;
		}
		else if (y < h - y && y < min) {
			min = y;
		}
	}
	cout << min;

	return 0;
}