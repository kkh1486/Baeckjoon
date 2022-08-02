#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long N = 0, M = 0;

    cin >> N >> M;
    if (N - M >= 0) {
        cout << N - M;
    }
    else {
        cout << -(N - M);
    }

    return 0;
}