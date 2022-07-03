#include <iostream>
#include <string>

using namespace std;

int main()
{
	int index = 0, result = 0, end = 0;
	int number[26] = { 3, 3, 3, 
					   4, 4, 4, 
				   	   5, 5, 5, 
					   6, 6, 6, 
					   7, 7, 7, 
					   8, 8, 8, 8, 
					   9, 9, 9, 
					   10, 10, 10, 10 };
	string str;

	cin >> str;
	end = str.length();
	for (int i = 0; i < end; i++) {
		index = (int)str[i] - 65;
		result += number[index];
	}
	cout << result;

	return 0;
}