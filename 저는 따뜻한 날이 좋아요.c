#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int temperature[], int temperature_len, int A, int B) {
	int answer = 0;
	int temp = 0; // A와 B중 더 큰 값을 저장
	if (temperature[A] > temperature[B])
		temp = temperature[A];
	else
		temp = temperature[B];

	for (int i = A + 1; i < B; i++) {
		if (temperature[i] > temp)
			answer++;
	}
	return answer;
}

int main() {
	int temperature[] = { 3, 2, 1, 5, 4, 3, 3, 2 };
	int temperature_len = 8;
	int A = 1;
	int B = 6;
	int ret = solution(temperature, temperature_len, A, B);

	printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}