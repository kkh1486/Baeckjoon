#include <iostream>
#include <algorithm>

using namespace std;

int compare(string x, string y) 
{
	if (x.length() == y.length()) {
		return x < y;
	}
	else {
		return x.length() < y.length();
	}
}

string word[20000];

int main()
{
	ios::sync_with_stdio(false);

	int N;


	cin >> N;
	if (N < 1 || N > 20000) {
		cout << "1 <= N <= 20,000";
		return 0;
	}
	for (int i = 0; i < N; i++) {
		cin >> word[i];
	}
	sort(word, word + N, compare);
	cout << word[0] << "\n";
	for (int i = 1; i < N; i++) {
		if (!(word[i] == word[i - 1])) {
			cout << word[i] << "\n";
		}
	}

	return 0;
}