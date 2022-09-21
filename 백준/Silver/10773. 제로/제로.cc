#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int K = 0, cnt = 0, x = 0, sum = 0;

	cin >> K;
	vector<int>* money = new vector<int>[K];
	for (int i = 0; i < K; i++) {
		cin >> x;
		if (x == 0) {
			cnt--;
			money->erase(money->begin() + cnt);
			continue;
		}
		else {
			money->push_back(x);
			cnt++;
		}
	}
	for (int i = 0; i < cnt; i++) {
		sum += money[0][i];
	}
	cout << sum;

	return 0;
}