#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    long long A = 0, B = 0, C = 0;

    cin >> A >> B >> C;
    if (B >= C) {
        cout << -1;
        return 0;
    }
    cout << A / (C - B) + 1;

    return 0;
}