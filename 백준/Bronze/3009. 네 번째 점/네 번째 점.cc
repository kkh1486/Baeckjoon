#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int x1 = 0, x2 = 0, x3 = 0, x4 = 0;
	int y1 = 0, y2 = 0, y3 = 0, y4 = 0;

	cin >> x1 >> y1;
	cin >> x2 >> y2;
	cin >> x3 >> y3;
	if (x1 == x2) {
		x4 = x3;
	}
	else if (x1 == x3) {
		x4 = x2;
	}
	else if (x2 == x3) {
		x4 = x1;
	}
	if (y1 == y2) {
		y4 = y3;
	}
	else if (y1 == y3) {
		y4 = y2;
	}
	else if (y2 == y3) {
		y4 = y1;
	}
	cout << x4 << " " << y4;

	return 0;
}