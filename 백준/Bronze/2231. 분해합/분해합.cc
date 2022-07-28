#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N = 0, M = 0, num = 0, result = 0, non = 1;
    cin >> N;

    for (int i = 0; i < N; i++) {
        if (non != 1) {
            break;
        }
        num = i;
        M = i;
        result = i;

        for (int j = 0; j < 7; j++) {
            result += num % 10;
            num /= 10;
        }
        if (N == result) {
            non--;
        }
    }
    if (non == 1) {
        cout << 0;
    }
    else {
        cout << M;
    }

    return 0;
}