#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int x = 0, y = 0;

    cin >> x >> y;
    if (y - x < 0) {
        cout << x + y;
    }
    else {
        cout << y - x;
    }

    return 0;
}