#include <iostream>

using namespace std;

int main() 
{
    int T = 0, a = 0, b = 0, result = 1;

    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> a >> b;

        for (int j = 0; j < b; j++) {
            result *= a;
            result %= 10;
        }
        if (result == 0) {
            cout << 10 << "\n";
        }
        else {
            cout << result % 10 << "\n";
        }

        result = 1;
    }


    return 0;
}