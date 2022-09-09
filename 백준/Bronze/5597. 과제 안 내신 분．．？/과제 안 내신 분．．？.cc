#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n = 0;
    int student[31] = { 0, };

    for (int i = 0; i < 28; i++) {
        cin >> n;
        student[n] = 1;
    }
    for (int i = 1; i <= 30; i++) {
        if (student[i] == 0) {
            cout << i << "\n";
        }
    }

    return 0;
}