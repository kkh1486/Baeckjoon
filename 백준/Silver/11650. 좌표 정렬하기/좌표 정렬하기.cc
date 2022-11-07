#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N = 0, x = 0, y = 0;
    vector<pair<int, int>> v;

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> x >> y;
        v.push_back({ x, y });
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < N; i++) {
        cout << v[i].first << " " << v[i].second << "\n";
    }

    return 0;
}