#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string str = "";

	cin >> str;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] >= 68 && str[i] <= 90) {
			str[i] -= 3;
		}
		else if (str[i] >= 65 && str[i] <= 67) {
			str[i] += 23;
		}
	}
	cout << str;

	return 0;
}