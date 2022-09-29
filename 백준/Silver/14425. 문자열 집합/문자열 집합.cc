#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int N = 0, M = 0;

	cin >> N >> M;
	vector<string>v1(N);
	vector<string>result;
	for (int i = 0; i < N; i++) cin >> v1[i];
	sort(v1.begin(), v1.end());
	string mm;
	int count = 0;
	for (int i = 0; i < M; i++) {
		cin >> mm;
		if (binary_search(v1.begin(), v1.end(), mm)) count++;
	}
	cout << count << '\n';

	return 0;
}