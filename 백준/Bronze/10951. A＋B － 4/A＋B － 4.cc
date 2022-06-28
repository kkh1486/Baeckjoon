#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int A = 0, B = 0;

	while (cin >> A >> B) {
		cout << A + B << "\n";
	}

	return 0;
}