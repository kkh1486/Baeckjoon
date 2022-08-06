#include <iostream>

using namespace std;

int main() 
{
    int N = 0, cnt = 0;
    string result = "";
    string str[50] = { "", };

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> str[i];
    }
    for (int i = 0; i < str[0].length(); i++) {
        for (int j = 1; j < N; j++) {
            if (str[0][i] != str[j][i]) {
                cnt++;
            }
        }
        if (cnt != 0) {
            result += "?";
        }
        else {
            result += str[0][i];
        }
        cnt = 0;
    }
    cout << result;

    return 0;
}