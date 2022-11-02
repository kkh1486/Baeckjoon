#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int N = 0, cnt = 0;
	int score[51] = { 0, };

	for (int i = 0; i < 50; i++) {
		cin >> N;
		score[i] = N;
	}
	cin >> N;
	while (N < score[cnt]) {
		cnt++;
	}
	if (cnt + 1 <= 5) {
		cout << "A+";
	}
	else if (cnt + 1 <= 15) {
		cout << "A0";
	}
	else if (cnt + 1 <= 30) {
		cout << "B+";
	}
	else if (cnt + 1 <= 35) {
		cout << "B0";
	}
	else if (cnt + 1 <= 45) {
		cout << "C+";
	}
	else if (cnt + 1 <= 48) {
		cout << "C0";
	}
	else {
		cout << "F";
	}

	return 0;
}