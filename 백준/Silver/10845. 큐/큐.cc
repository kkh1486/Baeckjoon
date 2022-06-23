#include <iostream>
#include <queue>
using namespace std;

int main()
{
	int N, x;
	string str;
	queue<int> queue;

	cin >> N;
	if (N < 1 || N > 10000) {
		cout << "N (1 <= N <= 10000)";

		return 0;
	}
	for (int i = 0; i < N; i++) {
		cin >> str;
		if (str == "push") {
			cin >> x;
			queue.push(x);
			if (x < 1 || x > 100000) {
				cout << "주어지는 정수는 1보다 크거나 같고, 100,000보다 작거나 같다.";
				
				return 0;
			}
		}
		else if (str == "front") {
			if (queue.empty()) {
				cout << "-1" << endl;
			}
			else {
				cout << queue.front() << endl;
			}
		}
		else if (str == "back") {
			if (queue.empty()) {
				cout << "-1" << endl;
			}
			else {
				cout << queue.back() << endl;
			}
		}
		else if (str == "empty") {
			cout << queue.empty() << endl;
		}
		else if (str == "pop") {
			if (queue.empty()) {
				cout << "-1" << endl;
			}
			else {
				cout << queue.front() << endl;
				queue.pop();
			}
		}
		else {
			cout << queue.size() << endl;
		}
	}

	return 0;
}