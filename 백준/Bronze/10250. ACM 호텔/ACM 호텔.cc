#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int T = 0, H = 0, W = 0, N = 0, frontroomnumber = 0, backroomnumber = 0;

    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> H >> W >> N;
        if (N % H == 0) {
            frontroomnumber = H * 100;
            backroomnumber = N / H;
        }
        else {
            frontroomnumber = (N % H) * 100;
            backroomnumber = N / H + 1;
        }
        cout << frontroomnumber + backroomnumber << endl;
    }

    return 0;
}