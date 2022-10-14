#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int height[][4], int height_len) {
	int count = 0;
	int test[6][6];
	int top, bot, left, right;
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++)
			test[i][j] = 51;
	}// 6X6 2차원 배열 51로 초기화
	for (int i = 1; i < 5; i++) {
		for (int j = 1; j < 5; j++)
			test[i][j] = height[i - 1][j - 1];
	}
	for (int i = 1; i < 5; i++) {
		for (int j = 1; j < 5; j++) {
			top = test[i - 1][j] - test[i][j];
			bot = test[i + 1][j] - test[i][j];
			left = test[i][j - 1] - test[i][j];
			right = test[i][j + 1] - test[i][j];
			if (top > 0 && left > 0 && right > 0 && bot > 0)
				count++;
		}
	}
	return count;
}
int main() {
	int height[4][4] = { {3, 6, 2, 8}, {7, 3, 4, 2}, {8, 6, 7, 3}, {5, 3, 2, 9} };
	int height_len = 4;
	int ret = solution(height, height_len = 4);

	printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}