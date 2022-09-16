#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int scores[], int scores_len) {
	int answer = 0;
	int temp;
	int sum = 0;
	for (int i = 0; i < scores_len - 1; i++) {
		for (int j = i + 1; j < scores_len; j++) {
			if (scores[i] > scores[j]) {
				temp = scores[i];
				scores[i] = scores[j];
				scores[j] = temp;
			}
		}
	} //오름차순 정렬 완료
	for (int i = 1; i < scores_len - 1; i++) {
		sum += scores[i];
	}
	answer = sum / (scores_len - 2);
	return answer;
}

int main() {
	int scores1[10] = { 35, 28, 98, 34, 20, 50, 85, 74, 71, 7 };
	int scores1_len = 10;
	int ret1 = solution(scores1, scores1_len);

	printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);

	int scores2[5] = { 1, 1, 1, 1, 1 };
	int scores2_len = 5;
	int ret2 = solution(scores2, scores2_len);

	printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);
}