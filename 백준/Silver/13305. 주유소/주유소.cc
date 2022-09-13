#include <iostream>

using namespace std;

int dist[100000] = { 0, };
int cost[100000] = { 0, };

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int N = 0;

	long long result = 0, now = 0;

	cin >> N;
	for (int i = 1; i < N; i++) {
		cin >> dist[i];
	}
	for (int i = 0; i < N; i++) {
		cin >> cost[i];
	}
	now = cost[0];
	result = now * dist[1];
	for (int i = 1; i < N; i++) {
		if (now < cost[i]) {
			result += now * dist[i + 1];
		}
		else {
			now = cost[i];
			result += now * dist[i + 1];
		}
	}
	cout << result;

	return 0;
}