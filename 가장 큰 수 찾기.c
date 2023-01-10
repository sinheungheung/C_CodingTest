#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// array_len은 배열 array의 길이입니다.
int* solution(int array[], size_t array_len) {
    int* answer = (int*)malloc(sizeof(int) * array_len);
    int max = array[0];
    int index = 0;
    for (int i = 0; i < array_len; i++)
        if (array[i] > max) {
            max = array[i];
            index = i;
        }
    answer[0] = max;
    answer[1] = index;
    return answer;
}