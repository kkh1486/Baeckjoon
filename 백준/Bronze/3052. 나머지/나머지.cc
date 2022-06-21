#include <iostream>

using namespace std;

int main()
{
	int number, sum = 0;
	int arr[42] = { 0, };

	for (int i = 0; i < 10; i++) {
		cin >> number;
		if (number > 1000 || number < 0) {
			cout << "이 숫자는 1,000보다 작거나 같고, 음이 아닌 정수이다.";

			return 0;
		}
		if (!arr[number % 42]++) {
			sum++;
		}
	}
	cout << sum;

	return 0;
}