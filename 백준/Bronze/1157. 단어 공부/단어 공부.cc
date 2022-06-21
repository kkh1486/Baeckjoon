#include <iostream>
#include <string>

using namespace std;

int main()
{
	int cnt = 0, max = 0, index = 0;
	int alphabet[26] = {};
	string str;

	cin >> str;

	for (int i = 0; i < str.length(); i++) {
		 if (str[i] < 97) {
			 alphabet[str[i] - 65]++;
		 }
		 else {
			 alphabet[str[i] - 97]++;
		 }
	}
	for (int i = 0; i < 26; i++) {
		if (alphabet[i] > max) {
			max = alphabet[i];
			index = i;
		}
	}
	for (int i = 0; i < 26; i++) {
		if (alphabet[i] == max) {
			cnt++;
		}
	}
	if (cnt > 1) {
		cout << "?";
	}
	else {
		cout << (char)(index + 65);
	}

	return 0;
}