#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int cnt = 0, number = 0;
    string str, str_number;

    cin >> str;
    for (int i = 0; i <= str.length(); i++) {
        if (str[i] == '+' || str[i] == '-' || str[i] == str[str.length()]) {

            if (cnt == 0) {
                number += stoi(str_number);
            }
            else {
                number -= stoi(str_number);
            }
            if (str[i] == '-') {
                cnt = 1;
            }
            str_number = "";
            continue;
        }
        str_number += str[i];
    }
    cout << number << "\n";

    return 0;
}