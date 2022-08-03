#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N = 0, v = 0, cnt = 0;
    int number[100] = { 0, };

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> number[i];
    }
    cin >> v;
    for (int i = 0; i < N; i++) {
        if (v == number[i]) {
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}