#include <iostream>

using namespace std;

int a[101][101], b[101][101];

int main() 
{
    int N = 0, M = 0;

    cin >> N >> M;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            cin >> b[i][j];
        }
    }
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            cout << a[i][j] + b[i][j] << " ";
        } 
        cout << "\n";
    }

    return 0;
}