#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string str, dstr;

	cin >> str;
	cin >> dstr;
	if (str.length() >= dstr.length()) {
		cout << "go";
	}
	else {
		cout << "no";
	}

	return 0;
}