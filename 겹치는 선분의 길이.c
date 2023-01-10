#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int** lines, size_t lines_rows, size_t lines_cols) {
    int answer = 0;
    int m[200] = { 0, }; // 수직선 양수 음수 표현(-100~100)
    for (int i = 0; i < lines_rows; i++) {
        for (int j = lines[i][0]; j < lines[i][1]; j++)
            m[j + 100]++; // 수직선 0 위치조정(+100)
    }
    for (int i = 0; i < 200; i++) // 수직선 양수 음수 표현(-100~100)
        if (m[i] > 1) answer++;

    return answer;
}
