#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T = 0, A = 300, B = 60, C = 10;

    cin >> T;
    A = T / A;
    T %= 300;
    B = T / B;
    T %= 60;
    C = T / C;
    T %= 10;
    if (T != 0) {
        cout << -1;
    }
    else {
        cout << A << " " << B << " " << C;
    }

    return 0;
}