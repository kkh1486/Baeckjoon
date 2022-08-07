#include <iostream>
#include <algorithm>

using namespace std;

int main() 
{
    int N = 0;

    cin >> N;
    int* divisor = new int[N];
    for (int i = 0; i < N; i++) {
        cin >> divisor[i];
    }
    sort(divisor, divisor + N);
    if (N % 2 == 1) {
        cout << divisor[N / 2] * divisor[N / 2];
    }
    else {
        cout << divisor[0] * divisor[N - 1];
    }

    return 0;
}