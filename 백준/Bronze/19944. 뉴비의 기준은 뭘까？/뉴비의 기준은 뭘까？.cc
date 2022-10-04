#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    
    int n, m;
    cin >> n >> m;
    if(m==1||m==2) cout << "NEWBIE!\n";
    else if(2 < m && m <= n) cout << "OLDBIE!\n";
    else cout << "TLE!\n";
    
    return 0;
}