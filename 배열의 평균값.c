#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len�� �迭 numbers�� �����Դϴ�.
double solution(int numbers[], size_t numbers_len) {
    double answer = 0;
    double s = 0;
    for (int i = 0; i < numbers_len; i++)
        s += numbers[i];
    answer = s / numbers_len;
    return answer;
}