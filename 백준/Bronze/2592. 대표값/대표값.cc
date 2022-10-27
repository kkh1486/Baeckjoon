#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
    int av = 0, count = 0, tmp = 0, ans = 0;
    int arr[1001] = { 0, };

    for (int i = 0; i < 10; i++) {
        cin >> tmp;
        arr[tmp]++;
        av += tmp;
    }

    for (int i = 10; i < 1001; i += 10) {
        if (arr[i] && count < arr[i]) {
            count = arr[i];
            ans = i;
        }
    }

    cout << av / 10 << endl << ans << endl;

	return 0;
}