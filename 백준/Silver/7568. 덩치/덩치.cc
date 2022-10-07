#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

	int N = 0;
	int body[51][2] = { };
	int result[51] = { };

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> body[i][0] >> body[i][1];
		result[i] = 1;
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (body[i][0] < body[j][0] && body[i][1] < body[j][1]) {
				result[i]++;
			}
		}
	}
	for (int i = 0; i < N; i++) {
		cout << result[i] << " ";
	}

	return 0;
}