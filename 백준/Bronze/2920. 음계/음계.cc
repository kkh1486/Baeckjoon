#include <iostream>

using namespace std;

int main()
{
	int ascending = 0, descending = 0;
	int input[8] = { 0, };

	for (int i = 0; i < 8; i++) {
		cin >> input[i];
	}
	for (int i = 0; i < 8; i++) {
		if (input[i] == i + 1) {
			ascending++;
		}
		else if (input[i] == 8 - i) {
			descending++;
		}
	}
	if (ascending == 8) {
		cout << "ascending";
	}
	else if (descending == 8) {
		cout << "descending";
	}
	else {
		cout << "mixed";
	}

	return 0;
}