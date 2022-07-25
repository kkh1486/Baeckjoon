#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a = 0, b = 0, c = 0, temp = 0;

    while (true) {
        cin >> a >> b >> c;
        
        if (a == 0 && b == 0 && c == 0) {
            break;
        }
        if ((a > b && b >= c) || (a > c && c >= b)) {
            if (a * a == b * b + c * c) {
                cout << "right" << "\n";
            }
            else {
                cout << "wrong" << "\n";
            } 
        }
        else if ((b > a && a >= c) || (b > c && c >= a)) {
            if (b * b == a * a + c * c) {
                cout << "right" << "\n";
            }
            else {
                cout << "wrong" << "\n";
            }
        }
        else {
            if (c * c == a * a + b * b) {
                cout << "right" << "\n";
            }
            else {
                cout << "wrong" << "\n";
            }
        }
    }
    
    return 0;
}