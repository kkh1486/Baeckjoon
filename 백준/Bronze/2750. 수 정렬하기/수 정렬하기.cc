#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N = 0;
    cin >> N;

    int* number = new int[N];

    for (int i = 0; i < N; i++) {
        cin >> number[i];
    }
    sort(number, number + N);
    for (int i = 0; i < N; i++) {
        cout << number[i] << "\n";
    }

    return 0;
}