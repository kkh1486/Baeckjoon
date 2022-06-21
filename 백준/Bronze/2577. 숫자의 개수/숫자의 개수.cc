#include <iostream>

using namespace std;

int main()
{
	int A, B, C;			// 100보다 크거나 같고, 1000보다 작은 세 개의 자연수
	int result = 0;			// 세 개의 자연수의 곱을 담는 변수
	int ncnt[10] = {0, };	// 0~9까지의 정수의 개수를 담는 배열 0개씩으로 초기화

	cin >> A;				// 첫째 줄 A 입력
	cin >> B;				// 둘째 줄 B 입력
	cin >> C;				// 셋째 줄 C 입력 

	// A, B, C 중 100보다 작고 1000보다 크거나 같은 경우 (예외 처리)
	if ((A < 100 || B < 100 || C < 100) || 
		(A >= 1000 || B >= 1000 || C >= 1000) || 
		(A % 1 != 0 || B % 1 != 0 || C % 1 != 0)) {
		cout << "A, B, C는 모두 100보다 크거나 같고, 1,000보다 작은 자연수이다.";

		return 0;
	}
	result = A * B * C;

	// result에서 0~9까지의 정수가 각각 몇 번 쓰였는지 알아내기
	while (result > 0) {
		ncnt[result % 10]++;
		result /= 10;
	}

	// A x B x C의 결과에 0~9까지의 정수가 각각 몇 번 쓰였는지 차례로 한 줄에 하나씩 출력
	for (int i = 0; i < 10; i++) {
		cout << ncnt[i] << endl;
	}

	return 0;
}