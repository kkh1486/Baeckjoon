#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N = 0, sum = 0, min = 0;

    cin >> N;
    int* P = new int[N + 1];
    for (int i = 1; i <= N; i++) {
        cin >> P[i];
    }
    sort(P, P + N + 1);
    for (int i = 1; i <= N; i++) {
        sum += P[i];
        min += sum;
    }
    cout << min;

    return 0;
}