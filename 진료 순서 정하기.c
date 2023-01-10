#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// emergency_len은 배열 emergency의 길이입니다.
int* solution(int emergency[], size_t emergency_len) {

    int* answer = (int*)malloc(emergency_len * sizeof(int));
    for (int i = 0; i < emergency_len; i++) {
        answer[i] = 1; // 본인을 먼저 1순위라 가정함
        for (int j = 0; j < emergency_len; j++) { // 다른 데이터랑 비교
            if (emergency[i] < emergency[j]) answer[i]++; // 다른 데이터가 크면 순위조정
        }
    }
    return answer;
}