#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	char alphabet;

	cin >> alphabet;
	if (alphabet == 'N' || alphabet == 'n') {
		cout << "Naver D2";
	}
	else {
		cout << "Naver Whale";
	}

	return 0;
}