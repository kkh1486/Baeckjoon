#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N = 0, m = 0, M = 0, T = 0, R = 0, min = 0, X = 0;

    cin >> N >> m >> M >> T >> R;
    X = m;
    for (int i = 0; i < N; min++ ) {
        if (M - m < T) {
            min = -1;
            break;
        }
        else if (X + T <= M) {
            X += T;
            i++;
        }
        else {
            if (X - R < m) {
                X = m;
            }
            else {
                X -= R;
            }
        }
    }
    cout << min;

    return 0;
}