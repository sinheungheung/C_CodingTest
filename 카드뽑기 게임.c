#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(char* cards[][2], int cards_len) {
	int answer = 0;
	for (int i = 0; i < cards_len; i++) {
		answer += atoi(cards[i][1]);
	} // 카드에 적힌 숫자의 합을 구한다 -> 문자를 숫자로 변환하는 atoi 함수 (array to integer)

// 색깔 판별
// strcmp: 문자열 비교
	if (strcmp(cards[0][0], cards[1][0]) == 0) {
		// 첫번째 카드와 두번째 카드가 색이 같다

		if (strcmp(cards[0][0], cards[2][0]) == 0) {
			answer *= 3; // answer = answer * 3;
		}
		else {
			answer *= 2;
		}
	}
	else if (strcmp(cards[0][0], cards[2][0]) == 0 || strcmp(cards[1][0], cards[2][0]) == 0) {
		answer *= 2;
	}
	else {
		answer *= 1;
	}
	return answer;
}

int main() {
	char* cards1[][2] = { {"blue", "2"}, {"red", "5"}, {"black", "3"} };
	int cards_len1 = 3;
	int ret1 = solution(cards1, cards_len1);

	printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);

	char* cards2[][2] = { {"blue", "2"}, {"blue", "5"}, {"black", "3"} };
	int cards_len2 = 3;
	int ret2 = solution(cards2, cards_len2);

	printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);
}