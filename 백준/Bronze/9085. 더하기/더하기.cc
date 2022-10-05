#include <iostream>

using namespace std;

int main()
{
    int num;
    
    cin >> num;
    for (int i = 0; i < num ; i++) {
        int a;
        cin >> a;
        int sum = 0;
        for (int j = 0; j<a ; j++) {
            int b;
            cin >> b;
            sum += b;
        }
        cout << sum << endl;
    }

    return 0;
}