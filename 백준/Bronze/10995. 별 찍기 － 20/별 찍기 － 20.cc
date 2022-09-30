#include <iostream>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N = 0;
    
    cin >> N;
    for(int i = 0; i < N; i++) {
        if(i % 2 == 1) {
             cout<<" ";           
        }
        for(int j = 0; j < N; j++) {
            cout << "* ";
        }
        cout << "\n";
    }
    
    return 0;
}