#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int N = 0, cnt = 0;
	string name = "";
	int alphabet[26] = { 0, };

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> name;
		alphabet[name[0] - 97]++;
	}
	for (int i = 0; i < 26; i++) {
		if (alphabet[i] >= 5) {
			cout << (char)(i + 97);
			cnt++;
		}
	}
	if (cnt == 0) {
		cout << "PREDAJA";
	}

	return 0;
}