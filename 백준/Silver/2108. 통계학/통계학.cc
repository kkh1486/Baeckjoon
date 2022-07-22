#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N = 0;
    int mean = 0, middle = 0, mode = 0, cnt = 1, mcnt = 1, second = 0, range = 0;

    cin >> N;
    int* integer = new int[N];
    for (int i = 0; i < N; i++) {
        cin >> integer[i];
        mean += integer[i];
    }
    if (mean > 0 && ((double)mean / (double)N - (double)(mean / N)) >= 0.5) {
        mean = mean / N + 1;
    }
    else if (mean < 0 && ((double)mean / (double)N - (double)(mean / N)) <= -0.5) {
        mean = mean / N - 1;
    }
    else {
        mean /= N;
    }

    sort(integer, integer + N);
    middle = integer[N / 2];

    mode = integer[0];
    for (int i = 0; i < N - 1; i++) {
        if (integer[i] == integer[i + 1]) {
            cnt++;
            if (cnt > mcnt) {
                mode = integer[i];
                mcnt = cnt;
                second = 0;
            }
            else if (cnt == mcnt) {
                second++;
                if (second == 1) {
                    mode = integer[i];
                }
            }
        }
        else {
            cnt = 1;
        }
    }
    if (N > 2 && mcnt == 1) {
        mode = integer[1];
    }

    range = integer[N - 1] - integer[0];

    cout << mean << "\n" << middle << "\n" << mode << "\n" << range;

    return 0;
}