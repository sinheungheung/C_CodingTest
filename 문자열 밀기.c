#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(const char* A, const char* B) {
    int answer = 0;
    if (strcmp(A, B) == 0) return 0;
    int n = strlen(A);
    char str[n + 1];
    int i;
    for (i = 0; i < n; i++) {
        for (int j = 1; j < n; j++) {
            str[j] = A[j - 1];
        }
        str[0] = A[n - 1]; str[n] = '\0';
        answer++; // 회전 수 카운트
        if (strcmp(str, B) == 0)break;
        strcpy(A, str); // 회전한 것을 A로 복사
    }
    if (i == n) return -1;

    return answer;
}