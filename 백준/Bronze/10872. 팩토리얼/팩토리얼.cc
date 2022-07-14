#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N = 0;
    long result = 1;

    cin >> N;
    for (int i = N; i > 0; i--) {
        result *= i;
    }
    cout << result;

    return 0;
}