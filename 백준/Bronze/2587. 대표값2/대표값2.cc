#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int number = 0, mean = 0, mid = 0;
	int array[5] = { 0, };

	for (int i = 0; i < 5; i++) {
		cin >> array[i];
		mean += array[i];
	}
	mean /= 5;
	
	sort(array, array + 5);
	mid = array[2];

	cout << mean << "\n" << mid;

	return 0;
}