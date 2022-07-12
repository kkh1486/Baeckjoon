#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N = 0, count = 0;
    string number;

    cin >> N;
    for (int i = 666; count < N; i++) {
        number = to_string(i);
        for (int j = 0; j < number.length() - 2; j++) {
            if (number[j] == '6' && number[j + 1] == '6' && number[j + 2] == '6') {
                count++;
                break;
            }
        }
    }
    cout << number;

    return 0;
}