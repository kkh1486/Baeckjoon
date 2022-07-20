#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int M = 0, N = 0;

    cin >> M >> N;
    bool* number = new bool[N + 1];
    for (int i = 0; i <= N; i++) {
        if (i == 0 || i == 1) {
            number[i] = false;
        }
        else {
            number[i] = true;
        }
    }
    for (int i = 2; i * i <= N; i++) {
        if (number[i]) {
            for (int j = i * i; j <= N; j += i) {
                number[j] = false;
            }
        }
    }
    for (int i = M; i <= N; i++) {
        if (number[i] == true) {
            cout << i << "\n";
        }
    }

    return 0;
}