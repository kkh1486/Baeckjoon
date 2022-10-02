#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int L = 0;
    long long result = 0;
    long long M = 1234567891;
    string str;
    
    cin >> L;
    cin >> str;
    
    for (int i = 0; i < L; i++) {
        char c = str[i];
        c -= ('a' - 1);
        long long r = 1;
        for (int j = 1; j <= i; j++) {
            r *= 31;
            if (r > M) {
                r = r % M;
            }
        }
        result += (long long)c * r;
        if (result > M) {
            result = result % M;
        }
    }
    cout << result;
    
    return 0;
}