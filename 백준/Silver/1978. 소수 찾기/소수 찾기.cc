#include <iostream>

using namespace std;

int main() 
{
    int N = 0, max = 0, cnt = 0;
    int number[100] = { 0, };

    cin >> N;
    cnt = N;
    for (int i = 0; i < N; i++) {
        cin >> number[i];
        if (number[i] > max) {
            max = number[i];
        }
        if (number[i] == 1) {
            cnt--;
        }
    }
    for (int i = 2; i < max; i++) {
        for (int j = 0; j < N; j++) {
            if (number[j] != 0 && number[j] != i && number[j] % i == 0) {
                number[j] = 0;
                cnt--;
            }
        }
    }
    cout << cnt;

    return 0;
}