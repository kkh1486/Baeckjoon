#include <iostream>
#include <string>

using namespace std;

int main()
{
    int index = 0;
    int alphabet[26] = { -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1 };
    string str;

    cin >> str;
    for (int i = 0; i < str.length(); i++) {
        index = str[i] - 97;
        if (alphabet[index] == -1) {
            alphabet[index] = i;
        }
    }
    for (int i = 0; i < 26; i++) {
        cout << alphabet[i] << " ";
    }

    return 0;
}