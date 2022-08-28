#include <iostream>

using namespace std;

int main() 
{
    int T = 0, cnt = 0;
    string str;

    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> str;
        for (int j = 0; j < str.length(); j++) {
            if (str[j] == '(') {
                cnt++;
            }
            else if (str[j] == ')') {
                cnt--;
                if (cnt < 0) {
                    break;
                }
            }
        }
        if (cnt == 0) {
            cout << "YES" << "\n";
        }
        else {
            cout << "NO" << "\n";
        }
        cnt = 0;
    }

    return 0;
}