#include <iostream>

using namespace std;

int main() 
{
    int number = 0, sum = 0, min = 100;
    int odd[7] = { 0, };

    for (int i = 0; i < 7; i++) {
        cin >> number;
        if (number % 2 == 1) {
            sum += number;
            if (number < min) {
                min = number;
            }
        }
    }
    if (sum == 0) {
        cout << -1;
    }
    else {
        cout << sum << "\n" << min;
    }

    return 0;
}