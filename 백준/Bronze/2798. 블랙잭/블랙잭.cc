#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N = 0, M = 0, sum = 0;
    cin >> N >> M;

    int* card = new int[N];
    for (int i = 0; i < N; i++) {
        cin >> card[i];
    }
    for (int i = 0; i < N - 2; i++) {
        for (int j = i + 1; j < N - 1; j++) {
            for (int k = j + 1; k < N; k++) {
                if (card[i] + card[j] + card[k] <= M && M - (card[i] + card[j] + card[k]) < M - sum) {
                    sum = card[i] + card[j] + card[k];
                }
            }
        }
    }
    cout << sum;

    return 0;
}