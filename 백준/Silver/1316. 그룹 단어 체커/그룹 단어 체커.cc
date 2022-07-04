#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n = 0, index = 0, cnt = 0, wcnt = 0;
    string str;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cnt = 0;
        int alphabet[26] = { 0, };

        cin >> str;
        for (int j = 0; j < str.length(); j++) {
            index = str[j] - 97;
            if (alphabet[index] == 0 || (j >= 1 && str[j] == str[j - 1])) {
                alphabet[index]++;
                cnt++;
            }
        }
        if (str.length() == cnt) {
            wcnt++;
        }
    }
    cout << wcnt;

    return 0;
}