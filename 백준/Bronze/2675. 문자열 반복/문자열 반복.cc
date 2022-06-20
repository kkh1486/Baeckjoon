#include <iostream>
#include <string>

using namespace std;

int main()
{
	int testcase, repeat;
	string str;

	cin >> testcase;
	if (testcase < 1 || testcase > 1000) {
		cout << "1 <= T <= 1000";

		return 0;
	}
	for (int i = 0; i < testcase; i++) {
		cin >> repeat >> str;
		if (1 > repeat || repeat > 8) {
			cout << "1 <= R <= 8";

			return 0;
		}
		if (1 > repeat || repeat > 20) {
			cout << " S의 길이는 적어도 1이며, 20글자를 넘지 않는다.";

			return 0;
		}
		for (int j = 0; j < str.length(); j++) {
			for (int k = 0; k < repeat; k++) {
				cout << str[j];
			}
		}
		cout << endl;
	}

	return 0;
}