#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int cnt = 0, number = 0;
    string str, result;

    cin >> str;

    for (int i = 0; i < str.length();) {
        if (str[i] == '.') {
            result += '.';
            i += 1;

            continue;
        }
        for (int j = i; j < str.length() && str[j] == 'X'; j++) {
            cnt++;
        }
        i += cnt;
        if (cnt % 2 == 1) {
            cout << "-1";

            return 0;
        }
        while (1) {
            if (cnt >= 4)
            {
                result += "AAAA";
                cnt -= 4;
            }
            else if (cnt == 2) {
                result += "BB";
                cnt -= 2;
            }
            else {
                break;
            }
        }
    }
    cout << result;

    return 0;
}