#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// array_len�� �迭 array�� �����Դϴ�.
int solution(int array[], size_t array_len) {
    int answer = 0;
    int i, j, idx;
    for (i = 0; i < array_len; i++) {
        for (j = 0; j < array_len - 1 - i; j++) {
            if (array[j] > array[j + 1]) {
                int temp;
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    idx = (array_len / 2);
    answer = array[idx];

    return answer;
}