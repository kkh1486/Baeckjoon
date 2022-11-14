#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	long long A, B;
	cin >> A >> B;

	if (A > B)
	{
		swap(A, B);
	}

	cout << (A + B) * (B - A + 1) / 2 << "\n";

	return 0;
}