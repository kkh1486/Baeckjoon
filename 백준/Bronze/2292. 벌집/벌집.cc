#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N = 0, number = 1, i = 1;

    cin >> N;
    while (number < N) {
        number += 6 * i;
        i++;
    }
    cout << i;

    return 0;
}