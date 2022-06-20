#include <iostream>

using namespace std;

int main()
{
	int h, m;

	cin >> h >> m;
	if ((0 > h || h > 23) || (0 > m || m > 59)) {
		cout << "0 <= H <= 23, 0 <= M <= 59";

		return 0;
	}
	if (m - 45 < 0) {
		h--;
		if (h < 0) {
			h = h + 24;
		}
		m = m - 45 + 60;
		cout << h << " " << m;
	}
	else {
		m = m - 45;
		cout << h << " " << m;
	}

	return 0;
}