#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N = 0, threekg = 0, fivekg = 0, remainder = 0;

    cin >> N;
    fivekg = N / 5;
    remainder = N % 5;
    while (remainder > 0) {
        if (fivekg < 1 && remainder % 3 != 0) {
            break;
        }
        if (remainder % 3 == 0) {
            threekg += remainder / 3;
            remainder = 0;
        }
        else {
            fivekg--;
            remainder += 5;
        }
    }
    if (remainder == 0) {
        cout << fivekg + threekg;
    }
    else {
        cout << -1;
    }

    return 0;
}