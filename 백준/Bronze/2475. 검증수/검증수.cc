#include <iostream>

using namespace std;

int main()
{
	int N = 0, result = 0;
	
	for (int i = 0; i < 5; i++) {
		cin >> N;
		result += N * N;
	}
	cout << result % 10;

	return 0;
}