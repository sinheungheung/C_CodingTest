#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numlist_len은 배열 numlist의 길이입니다.
int* solution(int n, int numlist[], size_t numlist_len) {
    int* answer = (int*)malloc(sizeof(int) * numlist_len);

    for (int i = 0, j = 0; i < numlist_len; i++) {
        if (numlist[i] % n == 0) answer[j++] = numlist[i];

    }
    return answer;
}