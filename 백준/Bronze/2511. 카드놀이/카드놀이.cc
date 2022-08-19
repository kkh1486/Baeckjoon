#include <iostream>

using namespace std;

int main() 
{
    int A = 0, B = 0;
    char last = 'D';
    int card_A[10] = { 0, };
    int card_B[10] = { 0, };

    for (int i = 0; i < 10; i++) {
        cin >> card_A[i];
    }
    for (int i = 0; i < 10; i++) {
        cin >> card_B[i];
    }
    for (int i = 0; i < 10; i++) {
        if (card_A[i] > card_B[i]) {
            A += 3;
            last = 'A';
        }
        else if (card_A[i] < card_B[i]) {
            B += 3;
            last = 'B';
        }
        else {
            A++;
            B++;
        }
    }
    cout << A << " " << B << "\n";
    if (A > B) {
        cout << 'A';
    }
    else if (A < B) {
        cout << 'B';
    }
    else {
        cout << last;
    }

    return 0;
}