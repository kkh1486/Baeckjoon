#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int T = 0;
	string AB;

	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> AB;
		cout << (AB[0] - '0') + (AB[2] - '0') << "\n";
	}

	return 0;
}