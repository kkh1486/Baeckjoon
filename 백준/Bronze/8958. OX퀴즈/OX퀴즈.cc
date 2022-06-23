#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n = 0, cnt = 0, sum = 0;
	string str;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> str;
		if (str.length() >= 80 || str.length() <= 0) {
			cout << "길이가 0보다 크고 80보다 작은 문자열";

			return 0;
		}
		for (int j = 0; j < str.length(); j++) {
			if (str[j] == 'O') {
				cnt++;
				sum += cnt;
			}
			else if (str[j] == 'X') {
				cnt = 0;
			}
			else {
				cout << "문자열은 O와 X만으로 이루어져 있다.";

				return 0;
			}
			
		}
		cout << sum << endl;
		sum = 0;
		cnt = 0;
	}

	return 0;
}