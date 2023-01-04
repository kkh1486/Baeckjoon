#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int N = 0, sum = 0;

	while (cin >> N) {
        sum += N;
    }
    cout << sum;

	return 0;
}