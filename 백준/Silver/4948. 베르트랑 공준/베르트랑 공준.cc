#include <iostream>

using namespace std;

int main() 
{
    int N = 1;

    while (N > 0) {
        cin >> N;

        int cnt = 0;
        bool* number = new bool[2 * N + 1];
        
        for (int i = 0; i <= 2 * N; i++) {
            if (i == 0 || i == 1) {
                number[i] = false;
            }
            else {
                number[i] = true;
            }
        }
        for (int i = 2; i * i <= 2 * N; i++) {
            if (number[i]) {
                for (int j = i * i; j <= 2 * N; j += i) {
                    number[j] = false;
                }
            }
        }
        for (int i = N; i <= 2 * N; i++) {
            if (number[i] == true) {
                cnt++;
                if (i == N) {
                    cnt--;
                }
            }
        }
        if (cnt != 0) {
            cout << cnt << "\n";
        }
    }

    return 0;
}