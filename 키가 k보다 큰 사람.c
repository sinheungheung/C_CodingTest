#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int height[], int height_len, int k) {
    int answer = 0;
    for (int i = 0; i < height_len; ++i)
        if (height[i] > k)
            answer++;

    return answer;
}