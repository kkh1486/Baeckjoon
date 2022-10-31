#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
    int A = 0, B = 0, C = 0, D = 0;

    cin >> A >> B >> C;
    cin >> D;
    cout << (A + (B + (C + D) / 60) / 60) % 24 << " " << (B + (C + D) / 60) % 60 << " " << (C + D) % 60;

	return 0;
}