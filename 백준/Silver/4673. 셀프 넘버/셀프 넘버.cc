#include <iostream>

using namespace std;

int d(int n)
{
	int result = n;
	
	while (n != 0) {
		result += n % 10;
		n /= 10;
	}

	return result;
}

int main()
{
	int n = 0;
	bool selfnum[10001] = { false, };

	for (int i = 1; i <= 10000; i++) {
		n = d(i);
		if (n <= 10000) {
			selfnum[n] = true;
		}
	}
	for (int i = 1; i <= 10000; i++) {
		if (selfnum[i] == false) {
			cout << i << "\n";
		}
	}
	
	return 0;
}