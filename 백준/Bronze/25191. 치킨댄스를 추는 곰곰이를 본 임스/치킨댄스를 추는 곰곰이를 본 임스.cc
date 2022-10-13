#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int N = 0, A = 0, B = 0, sum = 0;

	cin >> N;
	cin >> A >> B;
	
	sum = (A / 2) + B;
	if (sum > N) {
		sum = N;
	}
	cout << sum;

	return 0;
}