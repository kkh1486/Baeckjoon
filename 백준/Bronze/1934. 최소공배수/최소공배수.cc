#include <iostream>
#include <algorithm>

using namespace std;

int GCD(int a, int b)
{
	if (b == 0) {
        return a;
    }
	else {
        return GCD(b, a % b);
    }
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
	int T = 0, a = 0, b = 0, max = 0;
    
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> a >> b;
		max = GCD(a, b);
		cout << a * b / max << "\n";
	}
    
    return 0;
}