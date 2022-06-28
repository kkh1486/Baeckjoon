#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N = 0, newnumber = 0, front = 0, back = 0, cnt = 0;

	cin >> N;
	newnumber = N;
	do {
		front = newnumber / 10;
		back = newnumber % 10;
		newnumber = back * 10 + (front + back) % 10;
		cnt++;
	} while (N != newnumber);
	cout << cnt;

	return 0;
}