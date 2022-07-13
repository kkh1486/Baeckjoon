#include <iostream>

using namespace std;

int room(int a, int b)
{
    if (a == 0) {
        return b;
    }
    if (b == 1) {
        return 1;
    }
    return room(a - 1, b) + room(a, b - 1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int T = 0, k = 0, n = 0;

    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> k;
        cin >> n;
        cout << room(k, n) << "\n";
    }
    
    return 0;
}