#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int a = 0, b = 0;
	
	cin >> a >> b;
	cout << min(a / 2, b);

	return 0;
}