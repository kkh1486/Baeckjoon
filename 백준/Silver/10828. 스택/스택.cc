#include <iostream>
#include <stack>
using namespace std;

int main()
{
	int N, x;
	string str;
	stack<int> stack;

	cin >> N;
	if (N < 1 || N > 10000) {
		cout << "N (1 <= N <= 10000)";

		return 0;
	}
	for (int i = 0; i < N; i++) {
		cin >> str;
		if (str == "push") {
			cin >> x;
			stack.push(x);
			if (x < 1 || x > 100000) {
				cout << "주어지는 정수는 1보다 크거나 같고, 100,000보다 작거나 같다.";
				
				return 0;
			}
		}
		else if (str == "top") {
			if (stack.empty()) {
				cout << "-1" << endl;
			}
			else {
				cout << stack.top() << endl;
			}
		}
		else if (str == "empty") {
			cout << stack.empty() << endl;
		}
		else if (str == "pop") {
			if (stack.empty()) {
				cout << "-1" << endl;
			}
			else {
				cout << stack.top() << endl;
				stack.pop();
			}
		}
		else {
			cout << stack.size() << endl;
		}
	}

	return 0;
}