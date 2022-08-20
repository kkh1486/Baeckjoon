#include <iostream>
#include <algorithm>

using namespace std;

int main() 
{
    int N = 0, k = 0, x = 0;

    cin >> N >> k;
    int* grade = new int[N];
    for (int i = 0; i < N; i++) {
        cin >> x;
        grade[i] = x;
    }
    sort(grade, grade + N);
    cout << grade[N - k];

    return 0;
}