#include <iostream>
#include <deque>
using namespace std;

int main()
{
	int N, x;
	string str;
	deque<int> deque;

	cin >> N;
	if (N < 1 || N > 10000) {
		cout << "N (1 <= N <= 10000)";

		return 0;
	}
	for (int i = 0; i < N; i++) {
		cin >> str;
		if (str == "push_front") {
			cin >> x;
			deque.push_front(x);
			if (x < 1 || x > 100000) {
				cout << "주어지는 정수는 1보다 크거나 같고, 100,000보다 작거나 같다.";
				
				return 0;
			}
		}
		else if (str == "push_back") {
			cin >> x;
			deque.push_back(x);
			if (x < 1 || x > 100000) {
				cout << "주어지는 정수는 1보다 크거나 같고, 100,000보다 작거나 같다.";

				return 0;
			}
		}
		else if (str == "pop_front") {
			if (deque.empty()) {
				cout << "-1" << endl;
			}
			else {
				cout << deque.front() << endl;
				deque.pop_front();
			}
		}
		else if (str == "pop_back") {
			if (deque.empty()) {
				cout << "-1" << endl;
			}
			else {
				cout << deque.back() << endl;
				deque.pop_back();
			}
		}
		else if (str == "front") {
			if (deque.empty()) {
				cout << "-1" << endl;
			}
			else {
				cout << deque.front() << endl;
			}
		}
		else if (str == "back") {
			if (deque.empty()) {
				cout << "-1" << endl;
			}
			else {
				cout << deque.back() << endl;
			}
		}
		else if (str == "empty") {
			cout << deque.empty() << endl;
		}
		else {
			cout << deque.size() << endl;
		}
	}

	return 0;
}