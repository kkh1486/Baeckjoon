#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int N = 0, cnt = 0;
	string mbti;
	
	cin >> mbti;
	cin >> N;
	string *f_mbti = new string[N];
	for (int i = 0; i < N; i++) {
		cin >> f_mbti[i];
		if (f_mbti[i] == mbti) {
			cnt++;
		}
	}
	cout << cnt;
	
	return 0;
}