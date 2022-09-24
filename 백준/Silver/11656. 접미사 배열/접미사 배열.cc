#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string S;
    vector<string> suffix;
    
    cin >> S;
    for (int i = 0; i < S.length(); ++i) {
        suffix.push_back(S.substr(i, S.length() - i));
    }
    sort(suffix.begin(), suffix.end());
    for (int i = 0; i < suffix.size(); i++) {
        cout << suffix[i] << "\n";
    }
    
    return 0;
}