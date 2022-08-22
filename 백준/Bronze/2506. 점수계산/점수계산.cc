#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int N = 0, flag = 0, result = 0;
	
	cin >> N;
	int* score = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> score[i];
		if (i == 0 && score[i] == 1) {
			flag++;
			result += flag;
		}
		else if (score[i] == 1 && score[i - 1] == 0) {
			flag = 1;
			result += flag;
		}
		else if (i != 0 && score[i - 1] == 1 && score[i] == 1) {
			flag++;
			result += flag;
		}
		else {
			flag = 0;
		}
	}
	cout << result;

	return 0;
}