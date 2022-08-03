#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N = 0, M = 2;

    cin >> N;
    while (N != 1) {
        if (N % M == 0) {
            N /= M;
            cout << M << "\n";
        }
        else {
            M++;
        }
    }

    return 0;
}