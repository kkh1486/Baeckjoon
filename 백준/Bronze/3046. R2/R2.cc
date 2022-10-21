#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int R1 = 0, R2 = 0, S= 0;

	cin >> R1 >> S;
	R2 = 2 * S - R1;
	cout << R2;
	
	return 0;
}