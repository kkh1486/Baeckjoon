#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int cnt = 0;
    string str;

    
    while (true) {
        cin >> str;
        if (str == "0") {
            break;
        }
        for (int i = 0; i < str.length() / 2; i++) {
            if (str[i] != str[str.length() - 1 - i]) {
                continue;
            }
            else {
                cnt++;
            }
        }
        if (cnt == str.length() / 2) {
            cout << "yes\n";
        }
        else {
            cout << "no\n";
        }
        cnt = 0;
    }
    
    return 0;
}