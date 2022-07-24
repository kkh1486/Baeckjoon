#include <iostream>

using namespace std;

int number[10001] = { 0, };

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int M = 0, N = 0, sum = 0, min = 0;

    cin >> M;
    cin >> N;
    for (int i = 2; i <= 10000; i++) {
        number[i] = i;
    }
    for (int i = 2; i * i <= N; i++) {
        for (int j = i * i; j <= N; j += i) {   
            number[j] = 0;           
        }
    }
    for (int i = M; i <= N; i++) {
        if (min == 0) {
            min = number[i];
        }
        sum += number[i];
    }
    if (min == 0) {
        cout << -1;
    }
    else {
        cout << sum << "\n" << min;
    }

    return 0;
}