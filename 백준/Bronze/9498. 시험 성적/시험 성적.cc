#include <iostream>

using namespace std;

int main()
{
	int grade;

	cin >> grade;
	if (grade > 100 || grade < 0) {
		cout << "0 <= grade <= 100";
		return 0;
	}
	else if (grade >= 90) {
		cout << "A";
	}
	else if (grade >= 80) {
		cout << "B";
	}
	else if (grade >= 70) {
		cout << "C";
	}
	else if (grade >= 60) {
		cout << "D";
	}
	else {
		cout << "F";
	}

	return 0;
}