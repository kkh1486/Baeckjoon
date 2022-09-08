#include <iostream>

using namespace std;

long long fibonacci_arr[50] = { 0, 1, };
long long fibonacci(int N)
{
    if (N == 0 || N == 1) {
        return fibonacci_arr[N];
    }
    else if (fibonacci_arr[N] == 0) {
        fibonacci_arr[N] = fibonacci(N - 1) + fibonacci(N - 2);
    }
     return fibonacci_arr[N];
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T = 0, n = 0;

    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> n;
        if (n == 0) {
            cout << "1 0" << "\n";
        }
        else {
            cout << fibonacci(n - 1) << " " << fibonacci(n) << "\n";
        }
    }

    return 0;
}