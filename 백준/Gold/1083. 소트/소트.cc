#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N = 0, S = 0, max = 0, index = 0;
    
    cin >> N;
    int* A = new int[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    cin >> S;
    for (int i = 0; i < N; i ++) {
        max = A[i];
        index = i;
        for (int j = i + 1; j < N; j++) {
            if (S - (j - i) >= 0) {
                if (A[j] > max) {
                    max = A[j];
                    index = j;
                }
            }
        }
        for (int j = index; j > i; j--) {
            swap(A[j], A[j - 1]);
        }
        S -= index - i;
        if (S <= 0) {
            break;
        }
    }
    for (int i = 0; i < N; i++) {
        cout << A[i] << " ";
    }

    return 0;
}